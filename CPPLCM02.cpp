#include<iostream>

using namespace std;

#define M 1000000

unsigned long long save[1000006] = {0};
unsigned long long lcm(unsigned long long a, unsigned long long b){
    unsigned long long c = a;
    unsigned long long d = b;
    while(a != 0){
        unsigned long long x = a;
        a = b % a;
        b = x;
    }
    return ((c/b)*d);
}

int main(){
    int T;
    scanf("%d", &T);
    save[1] = 1;
    for(int i = 2; i <= M; i++){
        save[i] = lcm(save[i - 1], i);
    }
    while(T--){
        long long n;
        scanf("%lld", &n);
        cout << save[n] << "\n";
    }
}