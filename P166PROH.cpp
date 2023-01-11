#include<iostream>
#include<vector>

using namespace std;

#define M 3000
vector<int> mark(3006, 0);

void sieve() {
	mark[0] = mark[1] = 0;
	for(int i = 2; i <= M; i++) {
		if (mark[i] == 0) {
			for (int j = i; j <= M; j += i) {
				mark[j]++;
			}
		}
        // cout << mark[i] << " ";
	}
    // for(int i = 2; i <= M; i++) {
	// 	cout << mark[i] << " ";
	// }
}

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