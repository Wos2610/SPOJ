#include<iostream>
#include<vector>

using namespace std;

#define M 1000006
vector<int> mark(1000006,1);


void sieve(){
    mark[0] = mark[1] = 1;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j += i){
                if(mark[j] == 1){
                     mark[j] = i;
                }
               
            }
        }
    }
    for(int i = 2; i <= M; i++){
        if(mark[i] == 1){
            mark[i] = i;
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);
    sieve();
    while(T--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            cout << mark[i] << " ";
        }
        cout << "\n";
    }
}