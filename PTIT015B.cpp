#include<iostream>
#include<string>

using namespace std;

int a[1006][1006] = {0};

void check1(int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < m; k++){
                if(a[i][j] == a[k][j] && a[i][j] != a[i][j]){

                }
            }
        }
    }
}
int main(){
    int T;
    cin >> T;  
    while(T--){
        int m, n;
        cin >> m >> n;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
    }
}

