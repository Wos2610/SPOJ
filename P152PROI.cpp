#include<iostream>
#include<algorithm>

#define M 1000

using namespace std;

int gcd(int a, int b){
    while(a != 0){
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

void rutGon(int a){
    int tu = a % 360;
    int mau = 180;

    if(tu % mau == 0){
        if(tu/mau % 2 == 0){
            cout << "0$\n";
        }
        else{
            cout << "$\n";
        }
        return;
    }

    int k = gcd(tu, mau);
    tu /= k;
    mau /=k;

    if(tu == 1){
        cout << "$/" << mau << "\n";
    }
    else{
        cout << tu << "$/" << mau << "\n";
    }

}

int main(){
    int T;
    cin >> T;
    while(T--){
        int a;
        cin >> a;
        rutGon(a);
    }
} 