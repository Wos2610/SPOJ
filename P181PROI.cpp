#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for(int i = 2; i < n ; i++){
        if(str[i] == '0' && str[i - 1] == '1' && str[i - 2] == '0'){
            count++;
            str[i] = 1;
        }
    }
    cout << count;
}