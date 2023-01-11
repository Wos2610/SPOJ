#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 1000006
vector<int> mark(1000006,1);
vector<int> c(1000006,0);

void sieve(){
    mark[0] = mark[1] = 0;
    for(int i = 2; i * i <= M; i++){
        if(mark[i] == 1){
            for(int j = i * i; j <= M; j += i){
                mark[j] = 0;
            }
        }
    }
    for(int i = 2; i <= M; i++){
        if(mark[i] == 1){
            c[i] = c[i - 1] + 1;
        }
        else{
            c[i] = c[i - 1];
        }
    }
}

void isPerfectNum(long long l, long long r){
    int canl = sqrt(l);
    int canr = sqrt(r);
    cout << c[canr] - c[canl - 1];
}

int main(){
    int T;
    scanf("%d", &T);
    sieve();
    while(T--){
        long long l,r;
        scanf("%lld%lld", &l, &r);
        isPerfectNum(l,r);
        cout << "\n";
    }
}