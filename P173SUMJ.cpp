#include<iostream>
#include<string>
using namespace std;



int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[106] = {0};
        int c[106] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            c[a[i]]++;
        }

        int d1 = 0;
        int d = 0;
        for(int i = 1; i <= 100; i++){
            if(c[i] >= 2 ){
                d += c[i] / 2;
            }
        }
        cout << d / 2 << "\n";
    }
} 