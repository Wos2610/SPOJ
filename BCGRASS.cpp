#include<iostream>
#include<string>

using namespace std;

char a[106][106];
int mark[106][106] = {0};

int main(){
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == '#' && mark[i][j] == 0){
                if(a[i][j + 1] == '#' && mark[i][j + 1] == 0){
                    count++;
                    mark[i][j] = 1;
                    mark[i][j + 1] = 1;
                }
                else if(a[i + 1][j] == '#' && mark[i + 1][j] == 0){
                    count++;
                    mark[i][j] = 1;
                    mark[i + 1][j] = 1;
                }
                else{
                    count++;
                    mark[i][j] = 1;
                }
            }
        }
    }
    cout << count;
}