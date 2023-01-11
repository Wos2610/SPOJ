#include<iostream>
#include<string>

using namespace std;


int main(){
    string str;
    cin >> str;
    int n = str.size();
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < n; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            count1++;
        }
        if(str[i] >= 'A' && str[i] <= 'Z'){
            count2++;
        }
    }
    if(count1 >= count2){
        for(int i = 0; i < n; i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] += 32;
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= 32;
            }
        }
    }
    cout << str;
}