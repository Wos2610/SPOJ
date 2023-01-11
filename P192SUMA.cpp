#include<iostream>

using namespace std;

long long a[1000006] = {0};

int main() {
	int n, d;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long count = 0;
    for(int i = 1; i < n; i++){
        if(a[i - 1] >= a[i]){
            long long k = a[i - 1] - a[i];
            k /= d;
            a[i] += (k + 1) * d;
            count += (k + 1);
        }
    }
    cout << count;
}