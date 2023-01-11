#include<iostream>
#include<string>

using namespace std;

int main(){
    int T;
    cin >> T;  
    cin.ignore();
    while(T--){
        string str = "";
        getline(cin, str);
        if(str == "dung"){
            cout << "2\n";
        }
        if(str == "lon hon"){
            cout << "1\n";
        }
        if(str == "nho hon"){
            cout << "3\n";
        }
    }
}