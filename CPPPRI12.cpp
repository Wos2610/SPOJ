#include<iostream>
#include<vector>

using namespace std;

#define M 1000006
vector<int> mark(1000006,1);
vector<int> save;

void sieve(){
    mark[0] = mark[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 0;
            }
        }
    }
}

void check(vector<int> save, int n, int k){
    int count = 0;
    for(int i = 0; i < save.size(); i++){
        if(n % save[i] == 0){
            while(n % save[i] == 0){
                count++;
                if(k == count){
                    printf("%d\n",save[i]);
                    return;
                }
                n /= save[i];
            }
        }
        if(n == 1){
            break;
        }
    }
    if(k > count){
        printf("-1\n");
    }
}

int main(){
    int T;
    scanf("%d", &T);
    sieve();
    for(int i = 2; i <= M; i++){
        if(mark[i] == 1){
            save.emplace_back(i);
        }
    }
    while(T--){
        int n,k;
        scanf("%d%d", &n, &k);
        check(save, n, k);
    }
}