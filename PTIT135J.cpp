#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        float n,l,m;
        cin >> n >> l >> m;
        int count = 0;
        while(n < m){
            n = n + n * l / 100.0;
            count++;
        }
        cout << count << "\n";
    }
}