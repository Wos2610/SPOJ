#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int c[30] = {0};

int main() {
	string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        c[s[i] - 'a']++;
    }
    sort(c, c + 26);
    int d = 0;
    for(int i = 0; i < 24; i++){
        if(c[i] != 0){
            d += c[i];
        }
    }
    cout << d;
}