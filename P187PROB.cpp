#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

#define M 2000006
vector<int> prime(M, 0);

void sieve() {
	prime[1] = 1;
	for (int i = 2; i * i <= M; i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= M; j += i) {
				if (prime[j] == 0) {
					prime[j] = i;
				}
			}
		}
	}
	for (int i = 2; i <= M; i++) {
		if (prime[i] == 0) {
			prime[i] = i;
		}
	}
}

long long factorize(int m) {
	long long res = 0;
	while (m != 1) {
		int k = prime[m];
		int count = 0;
		while (m % k == 0) {
			m /= k;
			count++;
		}
        res += count * k;
	}
	return res;
}



int main() {
	int n;
	scanf("%d", &n);
 
	sieve();
	
	long long res = 0;
	while(n > 0){
		int m;
		scanf("%d", &m);
		res += factorize(m);
		// cout << factorize(m);
		n--;
	}

	printf("%lld", res);
	return 0;
}