#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x % 3 == 0){
                save.emplace_back(x);
            }
            count[x]++;
        }
        for(int i = 0; i < 9; i++){
            if(i % 3 != 0){
                m = min(m, count[i]);
            }
        }
        
    }
}