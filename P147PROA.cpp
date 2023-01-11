#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    double x, y, z;
    double V = (double)sqrt(s1 * s2 * s3);
    x = (double)V/s1;
    y = (double)V/s2;
    z = (double)V/s3;
    cout << 4*(x + y + z);
}