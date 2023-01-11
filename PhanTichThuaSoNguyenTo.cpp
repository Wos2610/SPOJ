#include<iostream>
#include<vector>

using namespace std;

#define M 1000006

vector<int> mark(1000006, 1);
vector<int> save;
void sieve() {
	mark[0] = mark[1] = 0;
	for (int i = 2; i * i <= M; i++) {
		if (mark[i] == 1) {
			for (int j = i * i; j <= M; j += i) {
				mark[j] = 0;
			}
		}
	}
}

void factorize() {
	int m = save.size();
	for(int j = 1; j <= M; j++){
		int n = j;
		for (int i = 0; i < m; i++) {
			if (n % save[i] == 0) {
				int count = 0;
				while (n % save[i] == 0) {
					count++;
					n /= save[i];
				}
				printf("%d %d", save[i], count);
			}
		}
		if (n != 1) {
			printf("%d 1", n);
		}
	}
	
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= M; i++) {
		if (mark[i] == 1) {
			save.emplace_back(i);
		}
	}
	factorize();
	return 0;
}