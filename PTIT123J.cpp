#include<iostream>
#include<string>
using namespace std;


int main(){
    string s;
    while(1){
        int count[100] = {0};
        while(1){
            char c = getchar();
            cout << c;
            if(c == '.'){
                break;
            }
            s.push_back(c);
        }
        cout << s << "\n";
        int n = s.size();
        if(n == 1 && s[0] == '.'){
            return 0;
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                count[s[i]]++;
            }
            if(s[i] == ')'){
                count[s[i]]++;
            }
            if(s[i] == '['){
                count[s[i]]++;
            }
            if(s[i] == ']'){
                count[s[i]]++;
            }
        }
        if(count['('] == count[')'] && count['['] == count[']']){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }

    }
} 