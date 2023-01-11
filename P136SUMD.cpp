#include<iostream>
#include<math.h>

using namespace std;

int p[106];
int a[106];

int main(){
    int c, k;
    cin >> c >> k;

    int dv = 1;
    for(int i = 1; i <= k; i++){
        dv *= 10;
    }

    int x1 = (c/dv)*dv;
    int a1 = abs(x1 - c);
    int x2 = x1 + dv;
    int a2 = abs(x2 - c);
    // cout << x1 << " " << x2;

    if(a1 > a2){
        cout << x2;
    }
    else if(a1 < a2){
        cout << x1;
    }
    else{
        cout << x2;
    }
} 