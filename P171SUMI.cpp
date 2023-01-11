#include<iostream>
#include<string>

using namespace std;

void check(string s){
    int count[26] = {0};
    int n = s.size();
    for(int i = 0; i < n; i++){
        count[s[i] - 'a']++;
    }

    int dL = 0;
    for(int i = 0; i < 26; i++){
        if(count[i] % 2 != 0){
            dL++;
        }
    }
    if(dL >= 4){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main(){
	int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        check(s);
    }
	return 0;
}