#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Team{
    string name;
    int k;
    int m;
    int count = 0;
};

Team f[76];

void tinh(int n){
    string maxname;
    int max = 0;
    long long dem = 0;
    for(int i = 0; i < n; i++){
        while(f[i].m / f[i].k > 0){
            int a = f[i].m/f[i].k;
            f[i].count += a;
            f[i].m = f[i].m - a*f[i].k + a*2;
        }
        if(f[i].count > max){
            maxname = f[i].name;
            max = f[i].count;
        }
        dem += f[i].count;
    }
    cout << dem << "\n" << maxname;
}


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i].name;
        cin >> f[i].k >> f[i].m;
    }
    tinh(n);
}