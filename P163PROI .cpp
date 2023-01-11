#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main(){
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int c[4] = {0};

    c[0] = d1 + d2 + d3;
    c[1] = 2 * (d1 + d2);
    c[2] = 2 * (d1 + d3);
    c[3] = 2 * (d2 + d3);
    sort(c, c + 4);
    cout << c[0];
} 