#include<iostream>

using namespace std;

int main(){
    int n,m, k;
    cin >> m >> n >> k;
    int a = m/2;
    int b = n;

    int res = 0;
    if(a >= b){
        res = b;
    }
    else{
        res = a;
    }

    int du = m + n - res*2 - res;
    while(du < k){
        du += 3;
        res--;   
    }

    cout << res;
}