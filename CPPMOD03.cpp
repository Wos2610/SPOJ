#include<iostream>
#include<math.h>

using namespace std;

string a[10000006];

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
        cout << sum;
        cout << "\n";
    }
}