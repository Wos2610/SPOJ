#include<iostream>
#include<string>
using namespace std;

int main(){
    int stt = 0;
    while(1){
        string str1, str2;
        cin >> str1 >> str2;
        stt++;
        if(str1 == "END" && str2 == "END"){
            return 0;
        }
        int count1[26] = {0};
        int count2[26] = {0};
        for(int i = 0; i < str1.size(); i++){
            count1[str1[i] - 'a']++;
        }
        for(int i = 0; i < str2.size(); i++){
            count2[str2[i] - 'a']++;
        }
        cout << "Case " << stt << ": ";
        int mark = 0;
        for(int i = 0; i < 26 ; i++){
            if(count1[i] != count2[i]){
                cout << "different\n";
                mark = 1;
                break;
            }
        }
        if(mark == 0){
            cout << "same\n";
        }
        
    }
} 