#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long ans = 0;
        if(y1 * y2 > 0){
            y1 = -y1;
        }
        ans = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        cout << ans << "\n";
    }
}