#include<iostream>
#include<string>

using namespace std;

char a[100][100] ;
int mark[100][100] = {0};
int mark1[1000] = {0};
int mark2[1000] = {0};

int main(){
    long long r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 'S'){
                mark1[i] = 1;
                mark2[j] = 1;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < r; i++){
        if(mark1[i] == 0){
            for(int j = 0; j < c; j++){
                count++;
                mark[i][j] = 1;
            }
        }
    }
    for(int j = 0; j < c; j++){
        if(mark2[j] == 0){
            for(int i = 0; i < r; i++){
                if(mark[i][j] == 0){
                    count++;
                }
            }
        }
    }
    cout << count;
} 