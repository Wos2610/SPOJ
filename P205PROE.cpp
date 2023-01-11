#include<iostream>
#include<math.h>
#include<string>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b; 

    int count = 0;
    int x1 = 0;
    int x2 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            x1 = abs(a[i] - '0' - (b[i] - '0'));
            x2 = 10 - x1;
            // cout << x1 << " " << x2 << " ";
            if(x1 > x2){
                count += x2 ;
            }
            else{
                count += x1 ;
            }
        } 
    }
    cout << count;
} 