#include<iostream>
#include<string>
 
using namespace std;

void dem(string str, int n){
    int count[26] = {0};
    int mark[26] = {0};

    for(int i = 0; i < n; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }

    for(int i = 0; i < n; i++){
        count[str[i] - 'a']++;
    }
    int d = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] > 1){
            d += count[i];
        }
    }
    cout << d << " ";
    for(int i = 0; i < n; i++){
        if(count[str[i] - 'a'] > 0 && mark[str[i] - 'a'] == 0){
            cout << str[i];
            mark[str[i] - 'a'] = 1;
        }
    }
    cout << "\n";
}

int main(){
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string str;
        getline(cin, str);
        int n = str.size();
        dem(str, n);
    }

}  