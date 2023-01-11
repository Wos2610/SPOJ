#include<iostream>
#include<string>

using namespace std;



void check(string s1, string s2, string s, int n){
    int count = 0;
    string temp = "";
    while(count <= 50){
        // cout << s1 << "\n";
        for(int i = 0; i < n; i++){
            temp.push_back(s2[i]);
            temp.push_back(s1[i]);
        }
        count++;
        // cout << temp << " ";
        if(temp == s){
            cout << count << "\n";
            return;
        }

        s1 = "";
        s2 = "";

        for(int i = 0; i < n; i++){
            s1.push_back(temp[i]);
        }
        for(int i = n; i < 2*n; i++){
            s2.push_back(temp[i]);
        }
        temp = "";
    }
    cout << "-1\n";
}

int main(){
    int n;
    while(1){
        cin >> n;
        if(n == 0){
            return 0;
        }
        string s1 = "", s2 = "", s = "";
        cin >> s1 >> s2 >> s;
        check(s1, s2, s, n);
    }
}