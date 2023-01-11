#include<iostream>

using namespace std;

int check(int x, int z, int a){
    int du1 = z % x;
    if(du1 > a || du1 == 0){
        return 0;
    }
    return 1;
}

void process(int x, int y, int z, int a, int c){
    if(check(x,z,a) == 1 && check(y,z,c) == 1){
        cout << "both\n";
    }
    else if(check(x,z,a) == 1 || check(y,z,c) == 1){
        cout << "one\n";
    }
    if(check(x,z,a) == 0 && check(y,z,c) == 0){
        cout << "none\n";
    }
}

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int p, m, g;
    cin >> p >> m >> g;
    int x = a + b;
    int y = c + d;
    process(x, y, p, a, c);
    process(x, y, m, a, c);
    process(x, y, g, a, c);
} 