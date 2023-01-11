#include<iostream>
#include<math.h>

using namespace std;

int a[1006] = {0};

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0){
            count++;
        }
    }
    if(count == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}