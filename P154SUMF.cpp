#include<iostream>
#include<string>

using namespace std;

struct Room{
    int p;
    int q;
    int r;
};

Room f[106];

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i].p >> f[i].q;
        f[i].r = f[i].q - f[i].p;
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if(f[i].r >= 2){
            count++;
        }
    }
    cout << count;
} 