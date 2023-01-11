#include<iostream>
#include<string>

using namespace std;

int a[100] = {0};

string sample = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string s1;
string s2;

void rotate(string *s1,int begin, int n, int k){
    for(int i = begin; i < begin + n; i++){
        for(int j= 0; j < 26; j++){
            if((*s1)[i] == sample[j]){
                // cout << j << " ";
                if(j + k >= 26){
                    (*s1)[i] = sample[j + k - 26];
                }
                else{
                    (*s1)[i] = sample[j + k];
                }
                break;
            }
        }
    }
}
void drm(string str){
    int n = str.size();
    // devide
    int k1 = 0, k2 = 0;
    for(int i = 0; i < n/2; i++){
        s1.push_back(str[i]);
        k1 += str[i] - 'A';
    }
    for(int i = n/2; i < n; i++){
        s2.push_back(str[i]);
        k2 += str[i] - 'A';
    }

    while(k1 > 26){
        k1 -= 26;
    }
    while(k2 > 26){
        k2 -= 26;
    }

    // rotate
    rotate(&s1, 0, n/2, k1);
    rotate(&s2, 0, n/2, k2);
    
    // merge

    for(int i = 0; i < n/2; i++){
        rotate(&s1, i, 1, s2[i] - 'A');
    }
    cout << s1 << "\n";

}
int main(){
    int T;
    cin >> T;  
    while(T--){
        string str;
        cin >> str;
        drm(str);
        s1 = "";
        s2 = "";
    }
}

