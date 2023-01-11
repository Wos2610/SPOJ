#include<iostream>
#include<math.h>
using namespace std;


int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    double x[4];

    x[0] = fabs(1.0*a/c - 1.0*b/d);
    x[1] = fabs(1.0*c/d - 1.0*a/b);
    x[2] = fabs(1.0*d/b - 1.0*c/a);
    x[3] = fabs(1.0*b/a - 1.0*d/c);
    
    int index = 0;
    double max = -999999;
    for(int i = 0; i < 4; i++){
        if(max < x[i]){
            max = x[i];
            index = i;
        }
    }
    cout << index;

} 