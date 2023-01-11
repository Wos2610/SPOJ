#include<iostream>

using namespace std;

int a[100] = {0};
int b[100] = {0};

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                cout << a[i] << " ";
            }
        }
    }
    
}