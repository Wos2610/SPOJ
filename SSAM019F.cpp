#include<iostream>

using namespace std;

long long f[100] = {0};

void fibo(){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(){
    int T;
    cin >> T;
    fibo();
    while(T--){
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}