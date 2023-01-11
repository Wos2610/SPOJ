#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[100006] = {0};


int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    long long sum = 0;
    
    int i = 0;
    int t = 1;
    while(k > 0){
        if(i == n && k > 0){
            t = -t;
            i = n - 1;
        }
        if(i == -1 && k > 0){
            t = -t;
            i = 0;
        }
        a[i] = -a[i];
        k--;
        i += t;
    }

    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum;
}