#include<iostream>

using namespace std;

int p[106];
int a[106];

int main(){
    int n;
    cin >> n;
    int m = n/2;
    for(int i = -m; i <= m; i++){
        for(int j = 1; j <= abs(i); j++){
            cout << "*";
        }
        for(int j = 1; j <= n - 2* abs(i); j++){
            cout << "D";
        }
        for(int j = 1; j <= abs(i); j++){
            cout << "*";
        }
        cout << "\n";
    }
} 