#include<iostream>
#include<string>

using namespace std;


int main(){
    string str;
    getline(cin, str);
    int n = str.size();
    cout << n - 1;
}