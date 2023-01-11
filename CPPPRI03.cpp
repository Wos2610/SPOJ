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

void factorize(int n){
    for(int i = 0; i < save.size(); i++){
        if(save[i] > n){
            break;
        }
        else{
            printf("%d ", save[i]);
        }
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
        int n;
        scanf("%d", &n);
        factorize(n);
    }
    return 0;
}