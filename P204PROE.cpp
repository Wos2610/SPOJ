#include<iostream>
#include<math.h>
#include<string>
 
using namespace std;

char a[36][36];

int check(int i, int j){
    int x,y;
    while(a[i][j] == 'B'){
        i++;
    }
    return i - 1;
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 'B'){
                int k = check(i, j) - i + 1;
                k /= 2;
                // cout << i << j;
                cout << i + k << " " << j + k;
                return 0;
            }
        }
    }
    return 0;
} 