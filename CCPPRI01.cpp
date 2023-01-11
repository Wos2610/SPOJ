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
                prime[j] = 0;
            }
        }
    }
}

void factorize(long long n){
    for(int i = 0; i < save.size(); i++){
        while(n % save[i] == 0){
            printf("%d ", save[i]);
            n /= save[i];
        }
        if(n == 1){
            break;
        }
    }
    if(n > 1){
        printf("%lld", n);
    }
    printf("\n");
}
int main(){
    int T;
    scanf("%d", &T);
    sieve();
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