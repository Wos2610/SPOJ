#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

#define M 1000006
vector<int> prime(1000006, 1);
vector<int> save;
void sieve(){
    for(int i = 2; i * i <= M; i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= M; j+= i){
                prime[j] = 0;
            }
        }
    }
}

void factorize(long long n){
    int m = save.size();
    long long res = 1;
    long long tmp = 0;
    for(int i = 0; i < m; i++){
        if(n == 1){
            break;
        }
        if(n % save[i] == 0){
            int count = 0;
            int k = save[i];
            while(n % k == 0){
                count++;
                n /= k;
            }
            tmp = (pow(k, count + 1) - 1) / (k - 1);
            res *= tmp;
        }   
    }
    if(n != 1){
        tmp = (pow(n, 2) - 1) / (n - 1);
        res *= tmp; 
    }
    printf("%lld\n", res);
}
int main(){
    int T;
    scanf("%d", &T);

    for(int i = 2; i <= M; i++){
        if(prime[i] == 1){
            save.emplace_back(i);
        }
    }

    while(T--){
        long long n;
        scanf("%lld", &n);
        factorize(n);
    }
    return 0;
}