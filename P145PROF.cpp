#include<iostream>

using namespace std;

int mark[100][100] = {0};

int main(){
    int n;
    cin >> n;
    int h = 0;
    int m = 0;
    for(int i = 0; i < n; i++){
       cin >> h >> m;
       mark[h][m]++;
    }
    int max = 0;
    for(int i = 0; i <= 23; i++){
        for(int j = 0; j <= 59; j++){
            if(mark[i][j] > max){
                max = mark[i][j];
            }
        }
    }
    cout << max;
}