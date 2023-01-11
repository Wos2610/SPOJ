#include<iostream>
#include<vector>

using namespace std;

#define M 1000000
#define MOD 1000000007

vector<long long> f(M + 6, 0);
void fibo(int n){
    f[0] = 0;
    f[1] = 1;
    int i;
    for(i = 2; i <= M ; i++){
        f[i] = (f[i - 1] % MOD + f[i - 2] % MOD) % MOD;
    }

    cout << f[n];

}
int main(){
    int n;
    cin >> n;
    fibo(n);
    return 0;
}