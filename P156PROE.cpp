#include<iostream>
#include<string>

using namespace std;

string M = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

int main(){
    while(1){
        int k;
        cin >> k;
        if(k == 0){
            return 0;
        }
        string str;
        cin >> str;
        string a = "";
        int n = str.size();
        for(int i = n - 1; i  >= 0; i--){
            for(int j = 0; j < 28; j++){
                if(str[i] == M[j]){
                    if(j + k < 28){
                       a.push_back(M[j + k]);
                    }
                    else{
                        a.push_back(M[j + k - 28]);
                    }
                }
            }
        }
        cout << a << "\n";
    }
} 