#include<iostream>

using namespace std;

int a[106] = {0};
int b[106] = {0};

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        if(n > m){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }

}