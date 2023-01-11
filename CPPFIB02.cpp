#include<iostream>
#include<math.h>
#define M 106

using namespace std;


long long a[M];

int check(long long n){
    for(int i = 0; i < M; i++){
        if(n == a[i]){
            return 1;
        }
        if(n < a[i]){
            break;
        }
    }
    return 0;
}

int main(){
    int T;
    cin >> T;
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i < M; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    while(T--){
        long long n;
        cin >> n ;
        if(check(n) == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}