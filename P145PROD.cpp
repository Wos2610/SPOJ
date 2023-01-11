#include<iostream>
#include<math.h>
using namespace std;

#define PI atan(1)*4

int main(){
    int r;
    cin >> r;
    double s1 = (double)PI * r * r;
    double s2 = (double)2 * r * r;
    printf("%0.6lf\n", s1);
    printf("%0.6lf", s2);
}