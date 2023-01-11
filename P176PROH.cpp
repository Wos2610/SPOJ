#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

long long a[4] = {0};

void check(long long x1, long long x2, long long x3){
    a[1] = abs(x2 - x1) + abs(x3 - x1);
    a[2] = abs(x1 - x2) + abs(x3 - x2);
    a[3] = abs(x1 - x3) + abs(x2 - x3);
    sort(a + 1, a + 1 + 3);
    cout << a[1] << "\n";
}
int main(){
    int T;
    cin >> T;
    while(T--){
        long long x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        check(x1, x2, x3);
    }
} 