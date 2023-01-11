#include<iostream>
#include<vector>

using namespace std;


void tongCS(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    while(sum >= 10){
        int tmp = sum;
        sum = 0;
        while(tmp > 0){
            sum += tmp % 10;
            tmp /= 10;
        } 
    }

    cout << sum << "\n";
}
int main() {
	int T;
    cin >> T;
    while(T--){
        int n; 
        cin >> n;
        tongCS(n);
    }
}