#include<iostream>
#include<math.h>

using namespace std;

char a[106][106];

int main(){
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int count = 0;
    for(int i = 0; i < n; i++){
        int x = abs(s[i] - t[i]);
        int y = 10 - x;
        if(x > y){
           count += y; 
        }
        else{
            count += x;
        }
        
    }
    cout << count;
}