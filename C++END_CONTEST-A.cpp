#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Word{
    char c;
    int count;
};

Word f[30];
void dem(string str){
    int n = str.size();
    for(int i = 0; i < n; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -=32;
        }
    }
    for(int i = 0; i < 26; i++){
        f[i].c = 'A' + i;
        f[i].count = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            if(str[i] == f[j].c){
                f[j].count++;
            }
        }
    }

    for(int i = 0; i < 26; i++){
        if(f[i].count != 0){
            cout << f[i].c << " " << f[i].count << "\n";
        }
    }
}
int main(){
    string str;
    getline(cin,str);
    dem(str);
}