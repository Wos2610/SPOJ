#include<iostream>
#include<string>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    if(n % 6 == 0){
        cout << x - y;
    }
    else if(n % 6 == 5){
        cout << -y;
    }
    else if(n % 6 == 4){
        cout << -x;
    }
    else if(n % 6 == 3){
        cout << y - x;
    }
    else if(n % 6 == 2){
        cout << y;
    }
    else{
        cout << x;
    }
} 