#include<iostream>
#include<algorithm>

using namespace std;

int a[1000006];

int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n, greater<int>());
    long long sum = 0;
    for(int i = 0; i < k + 1; i++){
        sum += a[i];
    }
    for(int i = k + 1; i < n; i++){
        sum -= a[i];
    }
    cout << sum;
}
