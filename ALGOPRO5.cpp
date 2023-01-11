#include<iostream>
#include<math.h>

using namespace std;


int main() {
	int n;
	cin >> n;
    long long ans = 1;
    long long temp = 1;
    for(int i = 1; i <= n; i++){
        temp *= 2;
    }
    ans = 2 * (temp - 1);
    cout << ans;
}