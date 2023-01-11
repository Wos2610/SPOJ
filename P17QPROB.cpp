#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 10000006

vector<int> minprime(M, 0);
vector<long long> f(M, 0);

void sieve() {
    minprime[1] = 1;
    for (int i = 2; i * i <= M; i++) {
        if (minprime[i] == 0) {
            for (int j = i * i; j <= M; j += i) {
                if (minprime[j] == 0) {
                    minprime[j] = i;
                }
            }
        }
    }

    for (int i = 2; i <= M; i++) {
        if (minprime[i] == 0) {
            minprime[i] = i;
        }
    }
}

void factorize() {
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= M; i++){
        long long temp = 0;
        long long ans = 1;
        int m = i;
        while(m != 1){
            int k = minprime[m];
            int count = 0;
            while(m % k == 0){
                count++;
                m /= k;
            }
            temp = (pow(k, count + 1) - 1)/(k - 1);
            ans *= temp;
        }
        f[i] = f[i - 1] + abs(i - (ans - i));
    }
}

int main() {
    sieve();

    int a,b;
    cin >> a >> b;

    factorize();

    cout << f[b] - f[a - 1];
}

