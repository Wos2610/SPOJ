#include<iostream>
#include<string>

using namespace std;

int a[100] = {0};

int main(){
    int T;
    cin >> T;  
    while(T--){
        int n, t;
        cin >> n >> t;
        long long sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            sum += a[i];
            if(sum > t){
                cout << i - 1;
                break;
            }
            else if(sum == t){
                cout << i;
                break;
            }
        }
        
        cout << "\n";
    }
}

