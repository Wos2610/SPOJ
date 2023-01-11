#include<iostream>
#include<string>
 
using namespace std;
 
string s[106];

int sao(string str){
    int n = str.size();
    for(int i = 0; i < n; i++){
        if(str[i] == '*'){
            return i;
        }
    }
    return 0;
}

int be(string x, string str){
    int a = str.size();
    int b = x.size();
    int count = 0;
    for(int i = 0; i < b; i++){
        if(x[i] == str[i]){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

int en(string x, string str){
    int a = str.size();
    int b = x.size();
    int index = a - 1;
    int count = 0;
    for(int i = b - 1; i >= 0; i--){
        if(x[i] == str[index]){
            count++;
            index--;
        }
        else{
            break;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a = str.size();
    int begin = sao(str);

    int count = 0;
    for(int i = 1; i <= n; i++){
        string x;
        cin >> x;
        if(be(x, str) == begin && en(x, str) == a - begin - 1){
            cout << "DA\n";
        } 
        else{
            cout << "NE\n";
        }
    }

}  