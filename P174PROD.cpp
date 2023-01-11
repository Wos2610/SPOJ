#include<iostream>
#include<algorithm>
 
using namespace std;

long long a[1000006] = {0};
long long b[1000006] = {0};

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        a[i % 5]++;
    }
    for(int i = 1; i <= m; i++){
        b[i % 5]++;
    }
    long long res = 0;
    res += a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1];
    cout << res;
}  