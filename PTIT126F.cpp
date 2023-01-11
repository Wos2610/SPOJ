#include<iostream>
#include<string>

using namespace std;

void check(string str){
    int n = str.size();
    int L = 0;
    int R = 0;
    int Lmax = 0;
    int Rmax = 0;
    int max = 0;
    int x = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'L'){
            L++;
            Lmax++;
            if(Lmax - R > max){
                max = Lmax - R;
            }
        }
        else if(str[i] == 'R'){
            R++;
            Rmax++;
            if(Rmax - L > max){
                max = Rmax - L;
            }
        }
        else if(str[i] == '?'){
            Rmax++;
            if(Rmax - L > max){
                max = Rmax - L;
            }
            Lmax++;
            if(Lmax - R > max){
                max = Lmax - R;
            }
            
        }
        // cout << Rmax << " " << Lmax << "\n";
    }
    cout << max;
}
int main(){ 
    string str;
    cin >> str;
    check(str);
}