#include<iostream>

using namespace std;

long long sum[1006] = {0};
long long a[1006] = {0};
long long b[1006] = {0};
void tinh(int n){
    for(int i = 1; i <= n; i++){
        sum[i] = sum[i - 1] + a[i - 1];
        a[i] = b[i] * i - sum[i];
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    tinh(n);
} 