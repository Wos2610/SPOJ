#include<iostream>
#include<algorithm>

using namespace std;

int a[1000006];

int main() {
	int n, k;
	cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[k];
}