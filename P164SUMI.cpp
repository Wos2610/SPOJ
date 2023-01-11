#include<iostream>
#include<math.h>

using namespace std;

int a[106] = {0};
int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] >= a[k] && a[i] > 0){
            count++;
        }
    }
    cout << count;
}