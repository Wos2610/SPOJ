#include<iostream>
#include<math.h>

using namespace std;


int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        long long k;
        cin >> k;
        long long sum = 0;
        for(int i = 1; i <= n; i++){
            sum += (i % k);
        }
        if(sum == k){
            cout << "1";
        }
        else{
            cout << "0";
        }
        cout << "\n";
    }
}