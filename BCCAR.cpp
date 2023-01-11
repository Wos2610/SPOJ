#include<iostream>
#include<algorithm>

using namespace std;

int a[26] = {0};

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);

        int res = (a[n - 1] - a[0])*2;
        cout << res << "\n";
    }
    
}