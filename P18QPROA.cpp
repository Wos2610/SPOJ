#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int count = 0;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                if(i % 2 == 0){
                    count++;
                }
                if((i != n/i) && (n/i % 2 == 0)){
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
}