#include<iostream>
#include<math.h>

using namespace std;

int a[100006] = {0};
int c[100006] = {0};

void check(int n){
    int d = 0;
    for(int i = 1; i <= n; i++){
        if(c[i] == 1){
            d++;
        }
    }
    // cout << d;
    if(d == 2){
        if(a[n] <= a[1]){
            cout << c[n];
        }
        else{
            cout << "-1";
        }
    }
    else if(d == 1){
        cout << "0";
    }
    else{
        cout << "-1";
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        if(a[i - 1] <= a[i]){
            c[i] = c[i - 1] + 1;
        }
        else{
            c[i] =  1;
        }
    }

    check(n);
    
} 