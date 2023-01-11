#include<iostream>
#include<string>

using namespace std;


int main(){
    long long n, m, a;
    cin >> n >> m >> a;

    long long x1 = 0;
    x1 = n / a;
    if(x1*a < n){
        x1++;
    }

    long long x2 = 0;
    x2 = m / a;
    if(x2*a < m){
        x2++;
    }

    long long ans = x1 * x2;
    cout << ans;
} 