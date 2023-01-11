#include<iostream>
#include<string>

using namespace std;

char a[50][50];

void ngang(int n, int* mark){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 2; j++){
            if(a[i][j] != '.'){
                if( a[i][j + 1] == a[i][j] && a[i][j + 2] == a[i][j] ){
                    cout << a[i][j];
                    *mark = 1;
                    return;
                }
            }
        }
    }
}

void doc(int n, int* mark){
    for(int i = 0; i < n - 2; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != '.'){
                if( a[i + 1][j] == a[i][j] && a[i + 2][j] == a[i][j] ){
                    cout << a[i][j];
                    *mark = 1;
                    return;
                }
            }
        }
    }
}

void cheoPhai(int n, int* mark){
    for(int i = 0; i < n - 2; i++){
        for(int j = 0; j < n - 2; j++){
            if(a[i][j] != '.'){
                if( a[i + 1][j + 1] == a[i][j] && a[i + 2][j + 2] == a[i][j] ){
                    cout << a[i][j];
                    *mark = 1;
                    return;
                }
            }
        }
    }
}

void cheoTrai(int n, int* mark){
    for(int i = 0; i < n - 2; i++){
        for(int j = 2; j < n; j++){
            if(a[i][j] != '.'){
                if( a[i + 1][j - 1] == a[i][j] && a[i + 2][j - 2] == a[i][j] ){
                    cout << a[i][j];
                   *mark = 1;
                    return;
                }
            }
            
        }
    }
}


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int mark = 0;
    doc(n, &mark);
    if(mark == 1){
        return 0;
    }
    ngang(n, &mark);
    if(mark == 1){
        return 0;
    }
    cheoPhai(n, &mark);
    if(mark == 1){
        return 0;
    }
    cheoTrai(n, &mark);
    if(mark == 1){
        return 0;
    }
    if(mark == 0){
        cout << "ongoing";
    }
    return 0;
} 