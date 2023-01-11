#include<iostream>

using namespace std;
 
long long f[100] = {0};

void fibo(int n){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = f[i - 2] + f[i - 1];
    }
    cout << f[n];
}
int main(){
	int n;
    cin >> n;
    fibo(n);
	return 0;
} 