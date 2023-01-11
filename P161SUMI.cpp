#include<iostream>
#include<algorithm>

using namespace std;

long long c[26] = {0};
int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        char x;
        cin >> x;
        c[x - 'A']++;
    }
    sort(c, c + 26);
    long long res = 0;
    for(int i = 25; i >= 0; i--){
        res += c[i] * c[i];
        k--;
        if(k == 0){
            break;
        }
    }
    cout << res;
}