#include<iostream>

long long f[1000000];

void factorial(){
    f[1] = 1;
    for(int i = 2; i <= 11; i++){
        f[i] = f[i - 1] * i;
    }
}

int main(){
    int T;
    scanf("%d", &T); 
    factorial();
    while(T--){
        long long n;
        scanf("%lld", &n);
        int index = 1;
        long long sum = 0;
        while(n > 0){
            int cs = n % 10;
             sum = sum + cs * f[index];
             index++;
             n /= 10;
        }
        printf("%lld\n", sum);
    }
}