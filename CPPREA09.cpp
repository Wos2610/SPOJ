#include<iostream>
#include<string>

using namespace std;

int a[10000006] = {0};
long long b[10000006] = {0};


int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        b[0] = a[0] * a[1];
        b[n - 1] = a[n - 2] * a[n - 1];
        for(int i = 1; i < n - 1; i++){
            b[i] = a[i - 1] * a[i + 1];
        }
        for(int i = 0; i < n ; i++){
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    
}