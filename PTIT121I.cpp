#include<iostream>
#include<string>

using namespace std;

void check(int ord, int r, string str){
    cout << ord << " ";
    for(int i = 0; i < str.size(); i++){
        for(int j = 0; j < r; j++){
            cout << str[i];
        }
    }
    cout << "\n";
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int ord;
        cin >> ord;
        int r;
        cin >> r;
        string str;
        cin >> str;
        check(ord, r, str);
    }
}