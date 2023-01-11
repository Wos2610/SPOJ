#include<iostream>
#include<math.h>

using namespace std;

int a[520][10] = {0};

int main(){
    int n;
    cin >> n;
    for(int i = 1; i < pow(2, n); i++){
        int m = 0;
        for(int j = n - 1; j >= 0; j--){
            a[i][j] = a[i - 1][j];
            if(a[i][j] == 0){
                m = j;
                a[i][j] = 1;
                for(int k = j + 1; k < n; k++){
                    a[i][k] = 0;
                }
                break;
            }
        }
        for(int j = 0; j < m; j++){
            a[i][j] = a[i - 1][j];
        }

    }
    for(int i = 0; i < pow(2,n); i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j];
        }
        cout <<"\n";
    }

}