#include<iostream>
#include<vector>

using namespace std;

int a[100] = {0};
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] != a[i + 1]){
            count++;
        }
    }
    cout << count;
    return 0;
}