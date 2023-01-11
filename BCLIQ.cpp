#include<iostream>

using namespace std;

int a[1006];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int count = 0;
    a[0] = -99999;
    int max = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] > a[i - 1]){
            count++;
            if(count > max){
                max = count;
            }
        }
    }
    cout << max;
}