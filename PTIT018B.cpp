#include<iostream>
#include<algorithm>

using namespace std;

int a[106] = {0};
int b[106] = {0};

int check(int n){
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int T;
    cin >> T;  
    while(T--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        
        sort(a, a + n);
        sort(b, b + n);

        if(check(n) == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}

