#include<iostream>

using namespace std;

int check(int n){
    if(n % 2 != 0){
        return 0;
    }
    for(int i = 2; i < n; i += 2){
        if((n - i) % 2 == 0){
            return 1;
        }
    }
    return 0;
}
int main() {
	int n;
    cin >> n;
    if(check(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}