#include<iostream>
#include<string>
#include<algorithm>
#include<stdbool.h>

using namespace std;

string save[1000];

void xoa0(string s){
    int n= s.size();
    int d = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            d++;
        }
        else{
            break;
        }
    }
    // cout << d << " ";
    s.erase(0, d);
}

bool compare(string s1, string s2){
    int n1 = s1.size();
    int n2 = s2.size();
    if(n1 < n2){
        while(n1 != n2){
            s1 = '0' + s1;
            n1++;
        }
    }
    if(n1 > n2){
        while(n1 != n2){
            s2 = '0' + s2;
            n2++;
        }
    }
    return s1 < s2;
}

void check(string str, int *index){
    int mark[100006] = {0};

    int n = str.size();
    for(int i = 0; i < n; i++){
        if(str[i] >= '0' && str[i] <= '9' && mark[i] == 0){
            mark[i] = 1;
            save[*index].push_back(str[i]);
            for(int j = i + 1; j < n; j++){
                if(str[j] >= '0' && str[j] <= '9'){
                    save[*index].push_back(str[j]);
                    mark[j] = 1;
                }
                else{
                    break;
                }
            }
            (*index)++;
        }
    }
    // cout << *index << " ";
}
int main(){
    int T;
    cin >> T;
    int index = 0;
    while(T--){
        string str;
        cin >> str;
        check(str, &index);
    }
    
    sort(save, save + index, compare);
    // for(int i = 0; i < index; i++){
    //     cout << save[i] << "\n";
    // }
    for(int i = 0; i < index; i++){
        int n= save[i].size();
        int mark = 0;
        int d = 0;
        for(int j = 0; j < n; j++){
            if(save[i][j] == '0'){
                d++;
            }
            else{
                mark = 1;
                break;
            }
        }
        // cout << d << " ";
        if(mark == 0){
            cout << "0\n";
        }
        else{
            save[i].erase(0, d);
            cout << save[i] << "\n";
        }
    }
}