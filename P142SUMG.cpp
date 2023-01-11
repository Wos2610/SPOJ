#include<iostream>
#include<algorithm>
using namespace std;

string sample = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string a;

void check(string str){
    int count[30] = {0};
    int mark[1006] = {0};
    int n = str.size();
    for(int i = 0; i < n; i++){
        if(str[i] == ' '){
            mark[i] = 1;
        }
        else{
            count[str[i] - 'A' + 1]++;
        }
    }
    int max = -999999;
    int index = 0;
    for(int i = 1; i <= 26; i++){
        // cout << count[i] << " ";
        if(max < count[i]){
            max = count[i];
            index = i;
        }
    }
    int dem = 0;
    for(int i = 1; i <= 26; i++){
        if(count[i] == max){
            dem++;
        }
    }
    if(dem != 1){
        cout << "NOT POSSIBLE\n";
        return;
    }

    int d = 0;
    if(index >= 5){
        d = abs(index - 5);
    }
    else{
        d = 26 - 5 + index;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            if(str[i] == sample[j]){
                if(j  - d < 0){
                    a.push_back(sample[26 - (d - j)]);
                }
                else{
                    a.push_back(sample[j - d]);
                }
            }
        }
    }
    cout << d << " ";
    for(int i = 0; i < n; i++){
        if(mark[i] == 1){
            a.insert(i, " ");
        }
    }
    cout << a << "\n";
}
int main(){
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        string str;
        getline(cin, str);
        // cout << str;
        check(str);
        a = "";
    }
}