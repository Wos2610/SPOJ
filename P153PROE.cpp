#include<iostream>
#include<vector>

using namespace std;

long long a[1000006] = {0};

int check(int n){
    long long d = 0;
    for(int i = n; i >= 1; i--){
        if(a[i] % i != 0){
            return 0;
        }
        else{
            d += (a[i] / i);
            a[i - 1] += d;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        cin >> a[i];
    }
    if(check(n)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}