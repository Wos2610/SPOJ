#include<iostream>

using namespace std;

int a[1006] = {0};

int check(int sum, int n){
    if(sum % 2 != 0){
        return 1;
    }
    int countC = 0;
    int countL = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            countC++;
        }
        else{
            countL++;
        }
    }
    if(countC == n || countL == n){
        return 0;
    }
    return 1;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(check(sum, n)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}