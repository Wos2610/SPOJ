#include<iostream>
#include<math.h>
 
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    long long S = 0;
    if(n % 2 == 0){
        S = n/2;
    }
    else{
        S = n/2 + (-n);
    }
    cout << S;
} 