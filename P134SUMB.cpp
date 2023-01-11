#include<iostream>
#include<math.h>

using namespace std;

int main(){
    long long g, y;
    cin >> g >> y;

    long long s = (g + 4)/2;
    long long p = g + y;

    long long denta = s*s - 4*p;

    long long m = (s - sqrt(denta))/2;
    long long n = (s + sqrt(denta))/2;

    cout << m << " " << n;
}