#include<iostream>
#include<string>

using namespace std;

long long a[1000006] = {0};
long long b[1000006] = {0};

int main(){
    long long n, m;
    cin >> n >> m;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    long long max = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    long long k = max - 1;
    while(1){
        long long sum = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] > k){
                sum += (a[i] - k);
            }
        }
        if(sum == m){
            cout << k;
            break;
        }
        else{
            k--;
        }
    }
    
} 