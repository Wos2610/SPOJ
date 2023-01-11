#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int x, y, p;
        cin >> x >> y >> p;
        long long h = 1;
        for(int i = 1; i <= y; i++){
            h *= x;
            h %= p;
        }
        cout << h << "\n";
    }
}