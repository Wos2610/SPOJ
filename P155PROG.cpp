#include<iostream>

using namespace std;

int p[106];
int a[106];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> p[i];
        a[p[i]] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
} 