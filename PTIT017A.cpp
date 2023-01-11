#include<iostream>
#include<vector>
 
using namespace std;
 
#define M 10000000
vector<int> mark(M + 6, 0);
 
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
	int T;
	scanf("%d", &T);
    int T1 = T;
    sieve();
    while(T--){
        int a,b,k;
        scanf("%d%d%d", &a, &b, &k);
        int d = 0;
        for (int i = a; i <= b; i++) {
            if (mark[i] == k) {
                d++;
            }
        }
        cout << "Case #" << T1 - T << ": " << d << "\n";
    }
	return 0;
} 