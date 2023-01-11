#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        int n = str.size();
        if(str[n - 2] == '8' && str[n - 1] == '6'){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }

}