#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void tinh(long long l1, long long r1, long long l2, long long r2, long long k){
    long long x = 0;
    if(r1 < l2 || r2 < l1){
        cout << "0";
        return;
    }
    if(l1 < l2 && l2 < r1 && r1 < r2){
        x = r1 - l2;
        if(l2 <= k && k <= r1){
            x--;
        }
    }
    if(l2 < l1 && l1 < r2 && r2 < r1){
        x = r2 - l1;
        if(l1 <= k && k <= r2){
            x--;
        }
    }
    if(l1 <= l2 && r2 <= r1){
        x = r2 - l2;
        if(l2 <= k && k <= r2){
            x--;
        }
    }
    if(l2 <= l1 && r1 <= r2){
        x = r1 - l1;
        if(l1 <= k && k <= r1){
            x--;
        }
    }
    cout << x + 1;

}

int main(){
    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >>k;
    tinh(l1, r1, l2, r2, k);
} 