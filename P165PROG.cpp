#include<iostream>
#include<math.h>

using namespace std;

string b = "127";
string b1 = "128";
string s = "32767";
string s1 = "32768";
string i = "2147483647";
string i1 = "2147483648";
string l = "9223372036854775808";

int kTra(int m, int k, string n, string b){
    if(m > k){
        return 0;
    }
    else if(m < k){
        n = '0' + n;
    }
    if(n <= b){
        return 1;
    }
    else{
        return 0;
    }
}

int checkByte(string n){
    int m = n.size();
    if(n[0] != '-'){
        if(kTra(m, 3, n, b)){
            cout << "byte";
            return 1;
        }
    }
    else{
        n.erase(n.begin());
        m = n.size();
        if(kTra(m, 3, n, b1)){
            cout << "byte";
            return 1;
        }
    }
    return 0;
}

int checkShort(string n){
    int m = n.size();
    if(n[0] != '-'){
        if(kTra(m, 5, n, s)){
            cout << "short";
            return 1;
        }
    }
    else{
        n.erase(n.begin());
        m = n.size();
        if(kTra(m, 5, n, s1)){
            cout << "short";
            return 1;
        }
    }
    return 0;
}

int checkInt(string n){
    int m = n.size();
    if(n[0] != '-'){
        if(kTra(m, 10, n, i)){
            cout << "int";
            return 1;
        }
    }
    else{
        n.erase(n.begin());
        m = n.size();
        if(kTra(m, 10, n, i1)){
            cout << "int";
            return 1;
        }
    }
    return 0;
}

int checkLong(string n){
    int m = n.size();
    if(n[0] != '-'){
        if(kTra(m, 19, n, l)){
            cout << "long";
            return 1;
        }
    }
    else{
        n.erase(n.begin());
        m = n.size();
        if(kTra(m, 19, n, l)){
            cout << "long";
            return 1;
        }
    }
    return 0;
}



int main(){
    string n;
    cin >> n;
    if(checkByte(n)){
        return 0;
    }
    else if(checkShort(n)){
        return 0;
    }
    else if(checkInt(n)){
        return 0;
    }
    else if(checkLong(n)){
        return 0;
    }
    else{
        cout << "BigInteger";
    }
}