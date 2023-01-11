#include<iostream>

using namespace std;

int dao(int a){
    int d = 0;
    while(a > 0){
        d = d * 10 + a % 10;
        a /= 10;
    }
    return d;

}
int main(){
    int a,b;
    cin >> a >> b;
    int d1 = dao(a);
    int d2 = dao(b);
    if(d1 > d2){
        cout << d1;
    }
    else{
        cout << d2;
    }
}