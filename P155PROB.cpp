#include<iostream>
#include<math.h>

using namespace std;

long long a[10] = {0};

int main(){
    long long x, s;
    cin >> x >> s;
    long long m = x * s;
    for(int i = 1; i <= 5; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= 5; i++){
        cout << a[i] - m << " ";
    }
} 