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
    long long tmp = 0;
    for(int i = 0; i < save.size(); i++){
        if(n % save[i] == 0){
            tmp = save[i];
            while(n % save[i] == 0){
                n /= save[i];
            }
        }
        if(n == 1){
            break;
        }
    }
    if(n > 1){
        tmp = n;
    }
    printf("%lld", tmp);
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