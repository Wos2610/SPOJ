#include<iostream>

using namespace std;

int a[1000006];

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    char save = str[1];
    int count = 1;
    for(int i = 1; i < n; i++){
        cin >> str;
        if(str[0] == save){
            count++;
        }
        save = str[1];
    }
    cout << count;
}