#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 1000006
vector<int> mark(M + 1, 1);
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

void check(int n) {
	int can = sqrt(n);
	if (can * can == n) {
		if (mark[can] == 1) {
			save.emplace_back(n);
			return;
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);
	sieve();
    for(int i = 1; i <= M; i++){
        check(i);
    }
	while (T--) {
		int n;
        scanf("%d", &n);
        for(int i = 0; i < save.size(); i++){
            if(save[i] > n){
                break;
            }
            printf("%d ", save[i]);
        }
        printf("\n");
	}
}