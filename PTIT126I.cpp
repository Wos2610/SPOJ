#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1;
    string s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    int mark1 = 0;
    int mark2 = 0;
    int check = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s2[j] == s1[i]){
                mark2 = j;
                mark1 = i;
                check = 1;
                break;
            }
        }
        if(check == 1){
            break;
        }
    }
    int index = 0;
    for(int i = 0; i < m; i++){
        if(i == mark2){
            cout << s1;
        }
        else{
            for(int j = 0; j < n; j++){
                if(j == mark1){
                    cout << s2[i];
                }
                else{
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}