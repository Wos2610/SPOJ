#include<iostream>

using namespace std;

#define MOD 1000000007

int main(){
    
    while(1){
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0){
            return 0;
        }
        b = b % MOD;
        long long h = 1;
        for(int i = 1; i <= b; i++){
            h = ( (h % MOD )* a) % MOD;
        }
        cout << h << "\n";
    }
}