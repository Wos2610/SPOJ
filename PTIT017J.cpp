#include<stdio.h>

#define M 10000006

int mark[10000006] = {0};
int save[10000006];

void sieve(){
    mark[0] = mark[1] = 1;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 0){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 1;
            }
        }
    }
}

int soUoc(int n, int save[], int m, int k){
    int count = 0;
    for(int i = 0; i < m; i++){
        if(n % save[i] == 0){
            count++;
            while(n % save[i] == 0){
                n /= save[i];
            }
        }
    }
    if(count == k){
        return 1;
    }
    return 0;
}

int main(){
    int T;
    scanf("%d", &T);
    int T1 = T;
    sieve();
    int m = 0;
    for(int i = 2; i <= M; i++){
        if(mark[i] == 0){
            save[m] = i;
            m++;
        }
    }
    while(T--){
        int a, b, c, d, e;
        scanf("%d%d%d", &a, &b, &c, &d, &e);
        
    }
} 