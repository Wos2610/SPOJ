#include<iostream>

using namespace std;

int m[10] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int res = 0;
        for(int i = 0; i < 9; i++){
           while(n >= m[i]){
               res += n / m[i];
               n -= (n/m[i]) * m[i];
           }
           if(n == 0){
               break;
           }
        }
        cout << res << "\n";
    }
    
}