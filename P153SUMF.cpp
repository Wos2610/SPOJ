#include<iostream>
#include<string>
using namespace std;

int count[26] = {0};

void check(int count[]){
    for(int i = 0; i < 26; i++){
        if(count[i] == 0){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < n; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
        count[str[i] - 'A']++;
    }
    check(count);
} 