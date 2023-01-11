#include<iostream>
#include<vector>
using namespace std;

#define M 100
vector<int> mark(M + 1, 1);
void sieve(){
    mark[0] = mark[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j+=i){
                mark[j] = 0;
            }
        }
    }
}

int main(){
    sieve();
    return 0;
}