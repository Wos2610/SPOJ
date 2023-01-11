#include<iostream>
#include<algorithm>
#include<string>

#define MOD 1000000007

using namespace std;

char a[106][106];

int check(int i, int j){
    int count = 0;
    if(a[i][j + 1] == 'o'){
        count++;
    }
    if(a[i][j - 1] == 'o'){
        count++;
    }
    if(a[i + 1][j] == 'o'){
        count++;
    }
    if(a[i - 1][j] == 'o'){
        count++;
    }

    if(count % 2 == 0){
        // cout << count << " ";
        return 1;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int d = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(check(i, j)){
                d++;
            }
        }
    }
    if(d == n*n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
} 