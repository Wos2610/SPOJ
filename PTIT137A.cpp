#include<iostream>

using namespace std;

int main(){
    while(1){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0){
            return 0;
        }
        int count = 0;
        while(a != b || b != c || c != d || d != a){
            int a1 = a, b1 = b, c1 = c, d1 = d;
            a = abs(a1 - b1);
            b = abs(b1 - c1);
            c = abs(c1 - d1);
            d = abs(d1 - a1);
            count++;
        }
        cout << count << "\n";
    }
}