#include<iostream>

using namespace std;

#define MOD 1000000007

long long a[1000006] = {0};

long long gcd(long long a, long long b){
    while(a != 0){
        long long x = a;
        a = b % a;
        b = x;
    }
    return b;
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%lld", &a[i]);
        }
        long long h = 1;
        long long g = a[1];
        for(int i = 1; i <= n; i++){
            h = ((h % MOD) * (a[i] % MOD)) % MOD;
            g = gcd(g, a[i]);
        }

        long long ans = 1;
        for(int i = 1; i <= g; i++){
            ans = ((ans % MOD) * (h % MOD)) % MOD;
        }
        printf("%lld\n", ans);
    }
}