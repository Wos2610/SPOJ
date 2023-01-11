#include<iostream>
#include<math.h>
#include<string>
 
using namespace std;

int d1[1000006] = {0};
int d2[1000006] = {0};

int main(){
    string s;
    cin >> s;
    int n = s.size();
    long long count = 0;
    
    if(s[0] == '2'){
        d2[0] = 1;
    }

    for(int i = 1; i < n; i++){
        if(s[i] == '2'){
            d2[i] = d2[i - 1] + 1;
        }
        else{
            d2[i] = d2[i - 1];
        }
    }

    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            count += (d2[n - 1] - d2[i - 1]);
        }
    }
    cout << count;
    
    return 0;
} 