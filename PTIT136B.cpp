#include<iostream>

using namespace std;

char a[1006][1006];
int b[1006];
long long s[1006] = {0};
int main(){
    int r, c;
    cin >> r >> c;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= r; i++){
        for(int j = c + 1; j <= 2*c; j++){
            a[i][j] = a[i][2*c - j + 1];
        }
    }
    for(int i = r + 1; i <= 2*r; i++){
        for(int j = 1; j <= 2*c; j++){
            a[i][j] = a[2*r - i + 1][j];
        }
    }

    int b, d; 
    cin >> b >> d;

    if(a[b][d] == '.'){
        a[b][d] = '#';
    }
    else{
        a[b][d] = '.';
    }

    for(int i = 1; i <= 2*r; i++){
        for(int j = 1; j <= 2*c; j++){
            cout << a[i][j] ;
        }
        cout << "\n";
    }
    

}