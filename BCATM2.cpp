#include<iostream>
#include<algorithm>

using namespace std;

long long m[36] = {0};

int main(){
    long long n, S;
    cin >> n >> S;
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }
    sort(m, m + n, greater<>());

    long long res = 0;
    for(int i = 0; i < 30; i++){
        while(S >= m[i]){
            res += S / m[i];
            S -= (S/m[i]) * m[i];
        }
        if(S == 0){
            break;
        }
    }
    cout << res << "\n";
}