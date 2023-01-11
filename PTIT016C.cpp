#include<iostream>
#include<string>

using namespace std;

long long a[1000006];

void check(string str){
    int m = str.size();
    for(int i = 1; i < m; i++){
        if(i % 2 == 0 && str[i] % 2 != 0){
            cout << "NO\n";
            return;
        }
        else if(i % 2 != 0 && str[i] % 2 == 0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string str = "";
        cin >> str;
        str = " " + str;
        check(str);
    }
}
