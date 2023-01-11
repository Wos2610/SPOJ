#include<iostream>
#include<math.h>

using namespace std;

string a[10000006];

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int i = 2;
        a[0] = "0";
        a[1] = "1";
        int index = 0;
        while(a[index].size() < n){
            a[i] = a[index] + "0";
            i++;
            a[i] = a[index] + "1";
            i++;
            index++;
        }

        for(int j = index; j < i; j++){
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}