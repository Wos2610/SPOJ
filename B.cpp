#include<iostream>
#include<vector>
using namespace std;
#define M 10000000
#define MOD 30052002

vector<int> mark(10000006, 1); 

void sieve(){
    mark[0] = mark[1] = 0;
    for (int i = 2; i * i <= M; i++) {
        for(int j = i * i; j <= M; j += i){
            mark[j] = 0;
        }
    }
}


int main(){
    int L, R;
    scanf("%d%d", &L, &R);

    sieve();
    
    long long res = 0;
    long long count = 1;

    for(int i = L; i <= R; i++){
        if(mark[i]){
            res =(res + (i % MOD) * (count % MOD)) % MOD;
            count++;
        }
    }
    printf("%lld", res);

}