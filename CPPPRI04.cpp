#include<iostream>
#include<vector>

using namespace std;

#define M 1000006
vector<int> prime(1000006, 1);
vector<int> save;
void sieve(){
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

void factorize(int n){
    for(int i = 1; i <= n; i++){
        printf("%d ", prime[i]);
    }
    printf("\n");
}

int main(){
    int T;
    scanf("%d", &T);
    sieve();
    while(T--){
        int n;
        scanf("%d", &n);
        factorize(n);
    }
    return 0;
}