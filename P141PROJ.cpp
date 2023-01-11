#include<iostream>
#include<string>

using namespace std;

char a[10][10];

int check(int i, int j){
    int count = 0;
    if(a[i][j + 1] == a[i][j]){
        count++;
    }
    if(a[i + 1][j] == a[i][j]){
        count++;
    }
    if(a[i + 1][j + 1] == a[i][j]){
        count++;
    }
    if(count >= 2){
        return 1;
    }
    return 0;

}
int main(){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(check(i, j)){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
    
} 