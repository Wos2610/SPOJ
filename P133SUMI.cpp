#include<iostream>
#include<string>
#include<math.h>

using namespace std;

char a[106][106];
char b[106][106];

void dem(string str){
    int n = str.size();
    int r = -1;
    int c = -1;
    int can = sqrt(n);
    if(can * can == n){
        r = can;
        c = can;
    }
    else{
        for(int i = 1; i <= can; i++){
            if(n % i == 0){
                r = i;
                c = n/i;
                // cout << r << c;
            }
        }
    }
    int index = 0;
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            a[i][j] = str[index];
            index++;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << a[j][i];
        }
    }
    
}

int main(){
    string str;
    cin >> str;
    dem(str);
}