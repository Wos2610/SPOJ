#include<iostream>
#include<string>

using namespace std;

int check(string str, int n){
    int mark = 0;
    for(int i = 0; i < n ;i++){
        if(str[i] != '1' && str[i] != '4'){
            return 0;
        }
        if(str[i] == '1'){
            mark = 1;
            int index = i + 1;
            while(str[index] == '4'){
                if(index - i > 2){
                    return 0;
                }
                index++;
            }
        }
        if(str[i] == '4' && mark == 0){
            return 0;
        }
    }
    if(mark == 0){
        return 0;
    }
    return 1;
}
int main(){
    string str;
    cin >> str;
    int n = str.size();
    if(check(str, n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}