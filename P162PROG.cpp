#include<iostream>

using namespace std;

long long d[1000006] = {0};


void dem(int x){
    int d = 0;
    while(x > 0){
        int temp = 1;
        while(1){
            if(temp*2 > x){
                break;
            }
            temp *= 2;
        }
        x -= temp;
        d++;
    }
    cout << d;
}
int main(){
    int x;
    cin >> x;
    dem(x);
    return 0;
}
