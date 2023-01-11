#include<iostream>
#include<string>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        str = str + " ";
        int n = str.size();
        int count = 1;
        for(int i = 1; i < n; i++){
            if(str[i - 1] == str[i]){
                count++;
            }
            else{
                cout << count << str[i - 1];
                count = 1;
            }
        }
        cout << "\n";
    }
}