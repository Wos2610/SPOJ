#include<iostream>
#include<math.h>

using namespace std;

#define MOD 1000000007

int main(){
    long long x,y;
    cin >> x >> y;
    long long n;
    cin >> n;
    n %= 6;
    long long res = 0;
    if(n == 1){
        res = x % MOD;
    }
    else if(n == 2){
        res = y % MOD;
    }
    else if(n == 3){
        res = (y - x) % MOD;
    }
    else if(n == 4){
        res = (-x) % MOD;
    }
    else if(n == 5){
        res = (-y) % MOD;
    }
    else if(n == 0){
        res = (-y + x) % MOD;
    }
    if(res < 0){
        res += MOD;
    }
    cout << res;
} 