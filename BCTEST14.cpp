#include<iostream>

using namespace std;

int main(){
    int a,b,v;
    cin >> a >> b >> v;
    int num = v - b;
    int den = a - b;
    if(num % den == 0){
        cout << num/den;
    }
    else{
        cout << num/den + 1;
    }
}