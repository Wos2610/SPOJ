#include<iostream>

using namespace std;

char a[106][106];

int main(){
    while(1){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0){
            return 0;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        int b[106][106] = {0};
        int mark[106][106] = {1};

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == '*'){
                    mark[i][j] = 1;
                    b[i - 1][j]++;
                    b[i + 1][j]++;
                    b[i][j - 1]++;
                    b[i][j + 1]++;
                    b[i - 1][j - 1]++;
                    b[i - 1][j + 1]++;
                    b[i + 1][j - 1]++;
                    b[i + 1][j + 1]++;
                }
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(mark[i][j] == 1){
                    cout << '*';
                }
                else{
                    cout << b[i][j];
                }
            }
            cout << "\n";
        }
    }
    
}