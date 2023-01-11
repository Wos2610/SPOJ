#include<iostream>
#include<vector>

using namespace std;

#define M 1000006
vector<int> prime(1000006, 1);
vector<int> save;
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
void check(vector<int> save, int n){
    int count = 0;
    int d = 0;
    for(int i = 0; i < save.size(); i++){
        if(n % save[i] == 0){
            d++;
            count = 0;
            while(n % save[i] == 0){
                count++;
                n /= save[i];
            }
            if(count > 1){
                printf("0");
                return;
            }
        }
        if(n == 1){
            break;
        }
    }
    if(d == 3){
        printf("1");
    }
    else{
        printf("0");
    }
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
        check(save, n);
        printf("\n");
    }
    return 0;
}