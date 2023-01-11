#include<iostream>

using namespace std;

#define MOD 100000001

int main(){
    int T;
    cin >> T;
    int T1 = T;
    while(T--){
        long long n;
        cin >> n;
        
        cout << "Case " << T1 - T << ": ";

        if(n == 0){
            cout << "1 0\n";
        }
        else{
            long long x = n * n;
            long long a = 2*x + 1;
            cout << a % MOD;
        }  
    }
}