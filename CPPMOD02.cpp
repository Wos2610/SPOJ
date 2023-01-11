#include<iostream>
 
using namespace std;
 
int main(){
    int T;
    cin >> T;
    while(T--){
        int a, m;
        cin >> a >> m;
        int mark = 0;
        int n = 0;
        for(int i = 1; i < m; i++){
           if(a * i % m == 1){
               cout << i;
               mark = 1;
               break;
           }
        }
        if(mark == 0){
            cout << "-1";
        }
        cout << "\n";
    }
} 