#include<iostream>
#include<string>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int stt;
        cin >> stt;
        string str;
        cin >> str;
        int n = str.size();
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0;
        int i = 0;
        while(i < n - 2){
            string tmp = "";
            tmp = tmp + str[i] + str[i+1] + str[i+2];
            if(tmp == "TTT"){
                c1++;
            }
            else if(tmp == "TTH"){
                c2++;
            }
            else if(tmp == "THT"){
                c3++;
            }
            else if(tmp == "THH"){
                c4++;
            }
            else if(tmp == "HTT"){
                c5++;
            }
            else if(tmp == "HTH"){
                c6++;
            }
            else if(tmp == "HHT"){
                c7++;
            }
            else if(tmp == "HHH"){
                c8++;
            }
            i++;
        }
        cout << stt << " " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << " " << c6 << " " << c7 << " " << c8 << "\n";
    }
}