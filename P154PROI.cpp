#include<iostream>
#include<math.h>
#include<string>

using namespace std;


int main(){
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        int n = str.size();
        int s[n] = {0};
        int r[n] = {0};
        for(int i = 1; i < n; i++){
            s[i] = abs(str[i] - str[i - 1]);
        }

        string dao = "";
        for(int i = n - 1; i >= 0; i--){
            dao.push_back(str[i]);
        }

        int mark = 0;
        for(int i = 1; i < n; i++){
            r[i] = abs(dao[i] - dao[i - 1]);
            if(s[i] != r[i]){
                cout << "NO\n";
                mark = 1;
                break;
            }
        }
        if(mark == 0){
            cout << "YES\n";
        }
    }
}