#include<iostream>

using namespace std;
 
long long f[100] = {0};

long long tao(int k){
    long long res = 1;
    while(k > 0){
        res *= 10;
        k--;
    }
    return res;
}
long long lcm(long long a, long long b){
    long long tich = a * b;
    while(a != 0){
        long long x = a;
        a = b % a;
        b = x;
    }
    return tich/b;
}

int main(){
	long long n, k;
    cin >> n >> k;
    long long temp = tao(k);
    // cout << temp;
    long long res = lcm(temp, n);
    cout << res;
	return 0;
} 