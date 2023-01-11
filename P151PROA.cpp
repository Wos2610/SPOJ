#include<iostream>
#include<string>

using namespace std;

void dem(string str, int n, int count[]){
    int l = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == '2'){
            count[2]++;
        }
        else if(str[i] == '3'){
            count[3]++;
        }
        else if(str[i] == '4'){
            count[3]++;
            count[2] += 2;
        }
        else if(str[i] == '5'){
            count[5]++;
        }
        else if(str[i] == '6'){
            count[3]++;
            count[5]++;
        }
        else if(str[i] == '7'){
            count[7]++;
        }
        else if(str[i] == '8'){
            count[2] += 3;
            count[7]++;
        }
        else if(str[i] == '9'){
            count[2]++;
            count[3] += 2;
            count[7]++;
        }
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int count[10] = {0};
        dem(a, n, count);
        for(int i = 7; i >= 2; i--){
            if(count[i] > 0){
                while(count[i] > 0){
                    cout << i;
                    count[i]--;
                }
            }
        }
        cout << "\n";
    }
    
}