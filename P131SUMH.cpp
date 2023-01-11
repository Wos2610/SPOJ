#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int s1 = abs(a - b) - 1;
    int s2 = abs(c - b) - 1;
    if(s1 > s2){
        cout << s1;
    }
    else{
        cout << s2;
    }
}