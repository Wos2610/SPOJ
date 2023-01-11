#include<iostream>
#include<string>

using namespace std;

int count[26] = {0};

int main(){
    string str;
    cin >> str;
    int n = str.size();
    for(int i = 0; i < n; i++){
        count[str[i] - 'a']++;
    }
    int dem = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] > 0){
            dem++;
        }
    }
    if(dem % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
} 