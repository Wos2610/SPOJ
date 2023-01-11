#include<iostream>
#include<math.h>

using namespace std;

void tinh(double s1, double s2, double s3){
    double a = sqrt(s1 * s2 / s3);
    double b = sqrt(s1 * s3 / s2);
    double c = sqrt(s3 * s2 / s1);
    double res = (a + b + c) * 4;
    cout << res << "\n";

}
int main(){
    int T;
    cin >> T;
    while(T--){
        double s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        tinh(s1, s2, s3);
    }
}