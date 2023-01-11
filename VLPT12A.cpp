#include<iostream>
using namespace std;

int a[106][106] = {0};

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int x,y;
        cin >> x >> y;
        int max = 0;
        int mi = 0;
        int mj = 0;
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                cin >> a[i][j];
                if(a[i][j] > max){
                    max = a[i][j];
                    mi = i;
                    mj = j;
                }
            }
        }
        long long res = 0;
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                if(a[i][j] != 0){
                     res += (abs(i - mi) + 1 + abs(j - mj) + 1) * a[i][j];
                } 
            }
        }
        res--;
        cout << res << "\n";
    }
} 