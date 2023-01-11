#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    for(int i = 0; i < n; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    for(int i = 0; i < n; i++){
        if(str[i] != 'a' && str[i] != 'o'&& str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i'){
            cout << "." << str[i];
        }
    }
}