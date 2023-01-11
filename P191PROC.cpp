#include<iostream>
#include<string>

using namespace std;

void check(string s, string a){
    int mark[10006] = {0};
    int count = 0;
    int n = s.size();
    for(int i = 1; i < n; i++){
        if(s[i] != ' '){
            a.push_back(s[i]);
        }
        else{
            mark[i] = 1;
            count++;
        }
    }

    a.push_back(s[0] + 32);

    if(a[0] >= 'a' && a[0] <= 'z'){
        a[0] -= 32;
    }

    int  m = a.size();
    for(int i = 0; i < m + count; i++){
        if(mark[i] == 1){
            a.insert(i, " ");
        }
    }
    cout << a;
    cout << "ee\n";
}
int main() {
	int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string s;
        getline(cin ,s);
        string a = "";
        check(s, a);
    }
}