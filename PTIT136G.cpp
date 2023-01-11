#include<iostream>
#include<string>
#include<stdbool.h>
#include<algorithm>


using namespace std;

char a[26][26];
string save[1006];

bool compare(string s1, string s2){
    return s1 < s2;
}

void check1(int r, int c, int *index){
    for(int i = 0; i < r; i++){
        string temp = "";
        int count = 0;
        for(int j = 0; j < c; j++){
            if(a[i][j] != '#'){
                temp.push_back(a[i][j]);
                count++;
            }
            else{
                if(count >= 2){
                    save[*index] = temp;
                    temp = "";
                    (*index)++;
                    count = 0;
                }
                else if(count == 1){
                    temp = "";
                    count = 0;
                }
            }
        }
        if(count >= 2){
            save[*index] = temp;
            temp = "";
            (*index)++;
            count = 0;
        }
        else if(count == 1){
            temp = "";
            count = 0;
        }
    }
}


void check2(int r, int c, int *index){
    for(int i = 0; i < c; i++){
        string temp = "";
        int count = 0;
        for(int j = 0; j < r; j++){
            if(a[j][i] != '#'){
                temp.push_back(a[j][i]);
                count++;
            }
            else{
                if(count >= 2){
                    save[*index] = temp;
                    temp = "";
                    (*index)++;
                    count = 0;
                }
                else if(count == 1){
                    temp = "";
                    count = 0;
                }
            }
        }
        if(count >= 2){
            save[*index] = temp;
            temp = "";
            (*index)++;
            count = 0;
        }
        else if(count == 1){
            temp = "";
            count = 0;
        }
    }
}

int main(){
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    int index = 0;
    check1(r,c, &index);
    check2(r,c, &index);
    sort(save, save + index, compare);
    // for(int i = 0; i < index; i++){
    //     cout << save[i] << "\n";
    // }
    cout << save[0];
}