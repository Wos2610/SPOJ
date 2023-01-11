#include<iostream>
#include<algorithm>

using namespace std;

struct Line{
    int l;
    int r;
};

Line f[100];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> f[i].l >> f[i].r;
    }
    
    int min = 1000000001;
    int max = 0;

    for(int i = 1; i <= n; i++){
        if(min > f[i].l){
            min = f[i].l;
        }
        if(max < f[i].r){
            max = f[i].r;
        }
    }
    int mark = -1;
    for(int i = 1; i <= n; i++){
        if(f[i].l == min && f[i].r == max){
            cout << i;
            mark = 0;
            break;
        }
    }
    if(mark == -1){
        cout << "-1";
    }
} 