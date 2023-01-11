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

void factorize(int n, vector<int>save){
    for(int i = 0; i < save.size(); i++){
        if(n % save[i] == 0){
            int count = 0;
            while(n % save[i] == 0){
                count++;
                n /= save[i];
            }
            printf("%d %d ", save[i], count);
        }
        if(n == 1){
            break;
        }
    }
    if(n != 1){
        printf("%d 1", n);
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
        factorize(n, save);
    }
    return 0;
}