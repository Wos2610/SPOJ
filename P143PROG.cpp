#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int min = 0;
    int max = 0;
    if(k % (n - 1) == 0){
        max = k/(n - 1)*n;
        min = k/(n - 1) - 1 + k;
    }
    else{
        min = k/(n - 1) + k;
        max = k/(n - 1) + k;
    }
    cout << min << " " << max;
} 