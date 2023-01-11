#include<iostream>
#include<string>

using namespace std;

int main(){
    int T;
    cin >> T;  
    cin.ignore();
    while(T--){
        string a = "";
        string b = "";
        string c = "";
        cin >> a;
        cin >> b;
        cin >> c;
        int count[10] = {0};
        int temp;
        for(int i = 0; i < a.size(); i++){
            temp = a[i] - '0';
            count[temp]++;
        }
        for(int i = 0; i < b.size(); i++){
            temp = b[i] - '0';
            count[temp]++;
        }
        for(int i = 0; i < c.size(); i++){
            temp = c[i] - '0';
            count[temp]++;
        }
        for(int i = 9; i >= 0; i--){
            if(count[i] > 0){
                for(int j = 0; j < count[i]; j++){
                    cout << i;
                }
            }
        }
        cout << "\n";
    }
}

