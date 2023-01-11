#include<iostream>
#include<string>

using namespace std;

int a[10] = {0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};

void lamTron(int n){
    if(n == 0){
        cout << "0\n";
        return;
    }
    for(int i = 8; i >= 0; i--){
        if(n > a[i]){
            string s = to_string(n);
            if(s[0] == '9'){
                if(s[1] >= '5'){
                    cout << a[i + 1] << "\n";
                    return;
                }
            }
            if(s[1] >= '5'){
                s[0] += 1;
            }
            else if(s[1] == '4'){
                int mark = 0;
                for(int j = 1; j <= i; j++){
                    if(s[j] > '4'){
                        mark = 1;
                        break;
                    }
                }
                if(mark == 1){
                    s[0] += 1;
                }
            }
            for(int j = 1; j <= i; j++){
                s[j] = '0';
            }
            cout << s << "\n";
            return;
        }
    }  
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        lamTron(x);  
    }
}