#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
#define M 1000006

vector<int> prime(M, 1);

void sieve(){
    prime[1] = 1;
    for(int i = 2; i * i <= M; i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= M; j += i){
                if(prime[j] == 1){
                    prime[j] = i;
                }
            }
        }
    }
    for(int i = 2; i <= M; i++){
        if(prime[i] == 1){
            prime[i] = i;
        }
    }
}

long long c[1000006] = {0};

long long s[1000006] = {0};

void factorize(){
    c[0] = 0;
    s[0] = 0;
    c[1] = 1;
    s[1] = 1;
    for(int i = 2; i <= 1000000; i++){
        int n = i;
        long long d = 1;
        long long sum = 1;
        long long temp = 0;
        while(n > 1){
            int k = prime[n];
            int count = 0;
            while(n % k == 0){
                count++;
                n /= k;
            }
            d *= (count + 1);
            // cout << d << " ";
            temp = (pow(k, count + 1) - 1)/(k - 1);
            sum *= temp;
            // cout << sum << " ";
        }
        c[i] = c[i - 1] + d;
        // cout << c[i] << " ";
        s[i] = s[i - 1] + sum;
    }
    
    
}

int main(){
    int T;
    cin >> T;
    sieve();
    factorize();
    while(T--){
        int a, b;
        cin >> a >> b;
        // cout << c[b];
        cout << c[b] - c[a - 1] << " " << s[b] - s[a - 1] << "\n";
    }
    return 0;
}