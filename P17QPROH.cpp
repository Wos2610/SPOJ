#include<iostream>
#include<algorithm>

using namespace std;

long long a[1000] = {0};
long long b[1000] = {0};

int main(){
    int T;
    cin >> T;
    int T1 = T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        long long res = 0;
        sort(a, a + n);
        sort(b, b + n, greater<>());
        for(int i = 0; i < n; i++){
            res += a[i] * b[i];
        }
        cout << "Case #" << T1 - T << ": ";
        cout << res << "\n";
    }
}