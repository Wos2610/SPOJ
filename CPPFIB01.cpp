#include<iostream>
#include<math.h>
#define M 1006
#define MOD 1000000007
using namespace std;


long long a[M] = {0};

int main(){
    int T;
    cin >> T;
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < M; i++){
        a[i] = (a[i - 1] % MOD+ a[i - 2] % MOD) % MOD;
    }
    while(T--){
        int n;
        cin >> n ;
        cout << a[n] << "\n";
    }
}