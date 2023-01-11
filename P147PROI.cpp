#include<iostream>
#include<string>
using namespace std;

int a[106] = {0};
int b[106] = {0};

int gcd(int a, int b){
    while(a != 0){
        int temp = a; 
        a = b % a;
        b = temp;
    }
    return b; 
}

void tinh(int n, int m){
    if(n < m){
       cout << "0/1"; 
    }
    else if(n > m){
        if(a[0] * b[0] < 0){
            cout << "-Infinity";
        }
        else{
            cout << "Infinity";
        }
    }
    else{
        int tu = abs(a[0]);
        int mau = abs(b[0]);
        int k = gcd(tu, mau);
        tu /= k;
        mau /= k;
        if(tu == 0){
            cout << "0/1";
        }
        else{
            if(a[0] * b[0] < 0){
                cout << "-";
            }
            cout << tu << "/" << mau;
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 0; i <= n; i++){
        cin >> b[i];
    }

    tinh(n, m);

    return 0;
} 