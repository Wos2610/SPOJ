#include<iostream>
#include<vector>

using namespace std;

#define M 1000006
vector<int> prime(1000006, 1);

void sieve(){
    prime[0] = prime[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= M; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);
    sieve();
    while(T--){
        int m,n;
        scanf("%d%d", &m, &n);
        for(int i = m; i <= n; i++){
            if(prime[i] == 1){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}