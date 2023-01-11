#include<iostream>
#include<string>

using namespace std;

int count1[26] = {0};
int count2[26] = {0};

int main(){
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    for(int i = 0; i < str1.size(); i++){
        count1[str1[i] - 'a']++;
    }
    for(int i = 0; i < str2.size(); i++){
        count2[str2[i] - 'a']++;
    }

    int count = 0;
    for(int i = 0; i < 26; i++){
        if(count1[i] != count2[i]){
            count++;
        }
    }
    cout << count;
}