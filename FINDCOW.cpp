#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    int after = 0;
    int sum = 0;

    for(int i = 0; i < n - 1; i++){
        if(str[i] == ')' && str[i + 1] == ')'){
            after++;
        }
    }

    for(int i = 0; i < n - 1; i++){
        if(str[i] == '(' && str[i + 1] == '('){
            sum += after;
        }
        if(str[i] == ')' && str[i + 1] == ')'){
            after--;
        }
    }

    cout << sum ;
}