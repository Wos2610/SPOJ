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

void factorize(int n) {
    long long ans = 1;
	int m = save.size();
	for (int i = 0; i < m; i++) {
		if (n % save[i] == 0) {
			int count = 0;
			while (n % save[i] == 0) {
				count++;
                n /= save[i];
			}
			ans *= (count*2 + 1);
		}
        if(n == 1){break;}
	}
	if (n != 1) {
		ans *= 3;
	}
    cout << ans << "\n";
}

int main() {
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        sieve();
        for (int i = 2; i <= M; i++) {
            if (mark[i] == 1) {
                save.emplace_back(i);
            }
        }
        factorize(n);
    }
	return 0;
}