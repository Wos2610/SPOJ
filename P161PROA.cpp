#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 1000006

vector<int> mark(M, 1);

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

void check(long long n){
    long long can = sqrt(n);
    if(can * can == n){
        if(mark[can] == 1){
            cout << "YES\n";
            return; 
        }
    }
    cout << "NO\n";
}


int main(){
    int n;
    cin >> n ;
    sieve();
    for(int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        check(x);
    }
    
}