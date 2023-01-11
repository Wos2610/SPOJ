#include<iostream>

using namespace std;

int a[1000000] = {0};
int mark[1000000] = {0};


int main(){
    long long a, b; 
    cin >> a >> b; 
    long long count = 0;
    long long d = 0;
    long long du = 0;
    while(a > 0 && b > 0){
        if(b > a){
            long long tmp = b;
            b = a;
            a = tmp;
        }
        d = a/b; 
        du = a - d*b;
        count += d; 
        a = b; 
        b = du; 
    }
    cout << count;
    return 0;
}