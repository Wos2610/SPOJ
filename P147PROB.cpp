#include<iostream>
#include<iomanip>
using namespace std;

int a[1000];

int main(){
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << setprecision(12) << fixed << (double) sum / n;
} 