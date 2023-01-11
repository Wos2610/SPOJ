#include<iostream>

using namespace std;

int a[1006][1006];
int b[1006];
long long s[1006] = {0};
int main(){
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            s[i] += a[i][j];
        }
        sum += s[i];
    }

    long long tong = sum / (2*(n - 1));

    for(int i = 1; i <= n; i++){
        b[i] = (s[i] - tong) / (n - 2);
        cout << b[i] << " ";
    }

}