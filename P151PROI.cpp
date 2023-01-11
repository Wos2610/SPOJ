#include<iostream>

using namespace std;

int tongCS(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void tong(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    while(sum >= 10){
        sum = tongCS(sum);
    }
    cout << sum << "\n";
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        tong(n);
    }
}