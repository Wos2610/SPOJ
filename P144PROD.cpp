#include<iostream>
#include<algorithm>
#include<string>

#define MOD 1000000007

using namespace std;

string s[26];

bool compare(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    if(n < m){
        while(n != m){
            s1 = '0' + s1;
            n++;
        }
    }
    if(n > m){
        while(n != m){
            s2 = '0' + s2;
            m++;
        }
    }
    // cout << s1  << "\n";
    // cout << s2;
    return s1 < s2;
}

void xoa(string str){
    if(str[0] == '0'){
        int j = 0;
        while(str[j] == '0'){
            j++;
        }
        str.erase(str.begin(), str.begin() + j);
    }
}
int main(){
    int stt = 0;
    while(1){
        int n;
        cin >> n;
        stt++;
        if(n == 0){
            return 0;
        }
        for(int i = 0; i < n; i++){
            cin >> s[i];
            if(s[i][0] == '0'){
                int j = 0;
                while(s[i][j] == '0'){
                    j++;
                }
                s[i].erase(s[i].begin(), s[i].begin() + j);
            }  
        }

        sort(s, s + n, compare);

        cout << "Case " << stt << ": ";
        if(s[0] != s[n - 1]){
            cout << s[0] << " " << s[n - 1];
        }
        else{
            cout << "There is a row of trees having equal height.";
        }
        cout << "\n";

    }
    return 0;
} 