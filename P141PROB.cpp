#include<iostream>
#include<string>

using namespace std;

char a[106][106];
int mark[106][106] = {0};

void check(int r, int c){
    int count = 0;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(a[i][j] == 'o'){
                count++;
            }
            if(a[i - 1][j - 1] == 'o'){
                mark[i][j]++;
            }
            if(a[i - 1][j] == 'o'){
                mark[i][j]++;
            }
            if(a[i - 1][j + 1] == 'o'){
                mark[i][j]++;
            }
            if(a[i][j - 1] == 'o'){
                mark[i][j]++;
            }
            if(a[i][j + 1] == 'o'){
                mark[i][j]++;
            }
            if(a[i + 1][j - 1] == 'o'){
                mark[i][j]++;
            }
            if(a[i + 1][j] == 'o'){
                mark[i][j]++;
            }
            if(a[i + 1][j + 1] == 'o'){
                mark[i][j]++;
            }
        }
    }

    if(count != r*c){
        int max = -99999;
        int imax = -1;
        int jmax = -1;
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                if(a[i][j] == '.'){
                    if(mark[i][j] > max){
                        max = mark[i][j];
                        imax = i;
                        jmax = j;
                    }
                }
            }
        }
        a[imax][jmax] = 'o';
        mark[imax - 1][jmax - 1]++;
        mark[imax - 1][jmax]++;
        mark[imax - 1][jmax + 1]++;
        mark[imax][jmax - 1]++;
        mark[imax][jmax + 1]++;
        mark[imax + 1][jmax - 1]++;
        mark[imax + 1][jmax]++;
        mark[imax + 1][jmax + 1]++;
        
    }

    int sum = 0;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            // cout << mark[i][j];
            if(a[i][j] == 'o'){
                sum += mark[i][j];
            }  
        }
        // cout << "\n";
    }
    cout << sum/2;
    
}
int main(){
    int r, c;
    cin >> r >> c;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> a[i][j];
            
        }
    }
    check(r,c);
} 