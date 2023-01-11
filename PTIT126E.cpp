#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    while(1){
        cin >> str;
        if(str == "#"){
            return 0;
        }
        int count = 0;
        int county = 0;
        int countn = 0;
        int n = str.size();
        for(int i = 0; i < n; i++){
            if(str[i] == 'A'){
                count++;
            }
            else if(str[i] == 'Y'){
                county++;
            }
            else if(str[i] == 'N'){
                countn++;
            }
        }
        if((float)count >= (float)n/2){
            cout << "need quorum\n";
        }
        else{
            if(county > countn){
                cout << "yes\n";
            }
            else if(county < countn){
                cout << "no\n";
            }
            else{
                cout << "tie\n";
            }
        }
    }
}