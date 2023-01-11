#include<iostream>


using namespace std;

long long a[10000006] ;


int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] != 0 && a[i] == a[i + 1]){
                a[i] *= 2;
                a[i + 1] = 0;
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
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