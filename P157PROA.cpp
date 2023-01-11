#include<iostream>

using namespace std;


int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int count[10006] = {0};
        int max = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            count[x]++;
            if(x > max){
                max = x;
            }
        }
        int m = 0;
        for(int i = 1; i <= max; i++){
            if(count[i] > m){
                m = count[i];
            }
        }
        for(int i = 0; i <= max; i++){
            if(count[i] == m){
                cout << i << "\n";
                break;
            }
        }
    }
    

} 