#include<iostream>
#include<vector>
using namespace std;

#define M 1000006

int main(){
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        int n = str.size();
        int x = (str[n - 2] - '0') * 10 + str[n - 1];
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += (str[i] - '0');
        }
        if(x % 4 == 0 && sum % 9 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}