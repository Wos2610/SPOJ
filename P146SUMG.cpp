#include<iostream>
#include<vector>

#define M 1000

using namespace std;

char f[506][506];

int main(){
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> f[i][j];
        }
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= a; j++){
            for(int p = 1; p <= c; p++){
                for(int q = 1; q <= b; q++){
                    cout << f[i][p];
                }
            }
            cout << "\n";
        }
    }
} 