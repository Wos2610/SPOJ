#include<iostream>
#include<string>

using namespace std;

int save[100000] = {0};

int main(){
    string str;
    cin >> str;
    int n = str.size();
    while(n % 3 != 0){
        str = "0" + str;
        n = str.size();
    }
    int index = 0;
    for(int i = n - 1; i >= 0; i -= 3){
        int sum = 0;
        if(str[i] == '1'){
            sum += 1;
        }
        if(str[i - 1] == '1'){
            sum += 2;
        }
        if(str[i - 2] == '1'){
            sum += 4;
        }
        save[index] = sum;
        index++;
    }
    for(int i = index - 1; i >= 0; i--){
        cout << save[i] ;
    }
}