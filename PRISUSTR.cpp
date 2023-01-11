#include<iostream>
#include<string>

using namespace std;

#define M 1000006

vector<int> mark(M, 1);

vector<int> save;
void sieve(){
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 0;
            }
        }
    }
}

int main(){
    sieve();
    for(int i = 2; i <= M; i++){
        if(mark[i] == 1){
            save.emplace_back(i);
        }
    }
    
} 