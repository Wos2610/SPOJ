#include<iostream>

using namespace std;

int check(int n){
    if(1 <= n && n <= 9){
        cout << n;
        return;
    }
    if(10 <= n && n <= 180){
        n /= 20;
        if(n % 2 == 0){
            cout << n/10;
        }
        else{
            cout << n % 10;
        }

    }
}
int main() {
	int n;
    cin >> n;
    
}