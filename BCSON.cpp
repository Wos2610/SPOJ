#include<iostream>
#include<math.h>

using namespace std;

long long a[1006][1006] = {0};
long long count[1006][1006] = {0};

int main(){
    int m,n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    long long dem = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j - 1] < a[i][j]){
                count[i][j] += (a[i][j] - a[i][j - 1]);
            }
            if(a[i][j + 1] < a[i][j]){
                count[i][j] += (a[i][j] - a[i][j + 1]);
            }
            if(a[i - 1][j] < a[i][j]){
                count[i][j] += (a[i][j] - a[i - 1][j]);
            }
            if(a[i + 1][j] < a[i][j]){
                count[i][j] += (a[i][j] - a[i + 1][j]);
            }
            dem += count[i][j];
        }
    }
    dem += m * n;
    cout << dem ;
}