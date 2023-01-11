#include<iostream>
#include<vector>

using namespace std;


int main() {
	int n;
	scanf("%d", &n);
    sieve();
    int d = 0;
	for (int i = 2; i <= n; i++) {
		if (mark[i] == 2) {
			d++;
		}
	}
	cout << d;
	return 0;
}