#include<iostream>
#include<vector>
 
using namespace std;
 
#define M 250000
 
vector<int> mark(M, 1);
vector<int> count(M, 0);
 
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
 
 
int main() {
    sieve();
	for (int i = 2; i <= M; i++) {
        count[i] = count[i - 1];
		if (mark[i] == 1) {
			count[i]++;
		}
	}
    while(1){
        int n;
        scanf("%d", &n);
        if(n == 0){
            return 0;
        }
        int res = count[2*n] - count[n - 1];
        if(mark[n] == 1){
            res--;
        }
        cout << res << "\n";
    }
	return 0;
} 