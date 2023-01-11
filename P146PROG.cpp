#include<iostream>
#include<string>

using namespace std;

int t[1000006] = {0};

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t[i];
    }
    int d1 = 0;
    int d2 = 0;
    if(n == 1){
        cout << "1 0";
        return 0;
    }
    int i = 1;
    int j = n;
    while(1){
        if(t[i] == t[j]){
            d1++;
            d2++;
            i++;
            j--;
            if(i == j){
                d1++;
                break;
            }
        }
        else if(t[i] < t[j]){
            t[j] = t[j] - t[i];
            i++;
            d1++;
            if(i == j){
                d2++;
                break;
            }
        }
        else{
            t[i] = t[i] - t[j];
            j--;
            d2++;
            if(i == j){
                d1++;
                break;
            }
        }
    }
    cout << d1 << " " << d2;
} 