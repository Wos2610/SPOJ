#include<iostream>
#include<algorithm>

using namespace std;

int a[200006] = {0};

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);
    
    // for(int i = 1; i <= n; i++){
    //     cout << a[i] << " ";
    // }
    int temp = a[k];
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] <= a[k]){
            count++;
        }
        else{
            break;
        }
    }

    if(k == 0){
        if(a[1] > 1){
            cout << "1";
        }
        else{
            cout << "-1";
        }
    }
    else{
        if(count > k){
            cout << "-1";
            return 0;
        }
        else{
            cout << a[k];
        }
    }
    
    return 0;
}