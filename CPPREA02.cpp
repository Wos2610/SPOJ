#include<iostream>
#include<string>

using namespace std;

long long a[10000000] = {0};

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int count = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] != 0){
                cout << a[i] << " ";
            }
            else{
                count++;
            }
        }
        for(int i = 0; i < count; i++){
            cout << "0" << " ";
        }
        cout << "\n";
    }
    
}