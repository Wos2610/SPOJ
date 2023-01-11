#include<iostream>
#include<string>

using namespace std;

long long mark[10000006] = {0};


int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int index = 0;
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            if(x < n){
                mark[x]++;
            }
        }
        for(int i = 0; i < n; i++){
            if(mark[i] != 0){
                cout << i << " ";
                mark[i] = 0;
            }
            else{
                cout << "-1" << " ";
            }
        }
        cout << "\n";
    }
    
}