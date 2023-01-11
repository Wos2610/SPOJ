#include<iostream>
#include<algorithm>

#define M 1000

using namespace std;

int a[100006] = {0};
int mark[100006] = {0};

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 0){
        cout << "0";
        return 0;
    }
    sort(a, a + n);
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << "\n";
    int count = 1;
    mark[0] = 1;
    for(int i = 0; i < n - 1; i++){
        if(a[i + 1] - a[i] <= k){
            mark[i + 1] = count;
        }
        else{
            count++;
            mark[i + 1] = count;
        }
    }
    // for(int i = 0; i < n; i++){
    //     cout << mark[i] << " ";
    // }
    cout << count;
} 