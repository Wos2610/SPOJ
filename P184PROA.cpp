#include<iostream>
 
using namespace std;
 
int a[1000000] = {0};
 
 
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if(b >= n - a){
        cout << n - a;
    }
    else{
        cout << b + 1;
    }
} 