#include<iostream>
#include<algorithm>
#include<stdbool.h>

using namespace std;

struct Cow{
    int hour;
    int min;
    int sec;
    int sum;
};

Cow c[5006];

bool compare(Cow c1, Cow c2){
    return c1.sum < c2.sum;
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> c[i].hour >> c[i].min >> c[i].sec;
        c[i].sum = c[i].hour * 3600 + c[i].min * 60 + c[i].sec;
    }

    sort(c, c + n, compare);

    for(int i = 1; i <= n; i++){
        cout << c[i].hour << " " << c[i].min << " " << c[i].sec << "\n";
    }
}