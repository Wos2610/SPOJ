#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long a, b;
        cin >> a >> b;
        long long tich = a * b;
        while(a != 0){
            long long x = a;
            a = b % a;
            b = x;
        }
        cout << tich/b << " " << b << "\n";
    }
}