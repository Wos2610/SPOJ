#include<iostream>

using namespace std;

long long a[1000006] = {0};
long long sum[1000006] = {0};

int main() {
	int n;
    cin >> n ;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sum[0] = 0;
    long long res = 0;
    for(int i = 1; i < n; i++){
        sum[i] = sum[i - 1] + a[i - 1];
        res += sum[i]*a[i];
    }
    cout << res;
}