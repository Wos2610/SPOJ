#include<iostream>
#include<string>

using namespace std;

string xoaChan(string str){
    for(int i = 1; i < str.size(); i++){
        str.erase(i, 1);
    }
    return str;
}
string xoaLe(string str){
    for(int i = 0; i < str.size(); i++){
        str.erase(i, 1);
    }
    return str;
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n;
        scanf("%d", &n);
        string str = "";
        for(int i = 1; i <= n; i++){
            str += to_string(i);
        }
        while(str.size() > 1){
            str = xoaChan(str);
            if(str.size() == 1){
                break;
            }
            str = xoaLe(str);
        }
        cout << str << "\n";
    }
}

