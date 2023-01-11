#include<iostream>
#include<string>
using namespace std;

int mark[3] = {0};
int ans[3] = {0};
int main(){
    string s[3];
    int index = 0;
    int indexx = 0;
    for(int i = 0; i < 3; i++){
        cin >> s[i];
        for(int j = 0; j < s[i].size(); j++){
            if(s[i][j] == '?'){
                index = i;
                indexx = s[i].size() - j;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        if(i != index){
            for(int j = 0; j < s[i].size(); j++){
                ans[i] = ans[i]*10 + (s[i][j] - '0');
            }
        }
    }
    int k = 0;
    if(index == 0){
        k = abs(ans[2] - ans[1]);
    }
    else if(index == 1){
        k = abs(ans[2] - ans[0]);
    }
    else{
        k = abs(ans[0] + ans[1]);
    }

    int cs = 0;
    while(indexx > 0){
        cs = k % 10;
        k /= 10;
        indexx--;
    }
    cout << cs;
}


    