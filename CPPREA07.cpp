#include<iostream>
#include<string>
#include<stdbool.h>
#include<algorithm>


using namespace std;

string a[10000006] ;

bool compare(string b, string c){
    if(b + c > c + b){
        return true;
    }
    return false;
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
        sort(a, a + n, compare);
        for(int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << "\n";
    }
    
}