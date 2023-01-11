#include<iostream>
#include<math.h>

using namespace std;

long long a[1006] = {0};
long long sum[1006] = {0};

int check(int n){
    for(int i = 1; ; i++){
        a[i] = a[i - 1] + i;
        sum[i] = sum[i - 1] + a[i];
        if(sum[i] > n){
            return i - 1;
        }
        else if(sum[i] == n){
            return i;
        }
    }
}
int main(){
    int n;
    cin >> n;
    cout << check(n);
}