#include<iostream>

using namespace std;

int a[1000000] = {0};
int mark[1000000] = {0};


int main(){
    int n;
    cin >> n ;
    
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mark[a[i]] = 1;
    }
    int m = 0;
    for(int i = 1; i <= n; i++){
        if(mark[i] == 0){
            cout << i;
            m = 1;
            break;
        }
    }
    if(m == 0){
        cout << n + 1;
    }
    
}