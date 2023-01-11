#include<iostream>

using namespace std;

int a[106];

int check(int a, int b, int x, int y, int z){
    if(x*x + y*y == z*z){
        if(x <= a && y <= b){
            return 1;
        }
        else if(x <= b && y <= a){
            return 1;
        }
        else{
            return 0;
        }
    }
    return 0;
}

int main(){
    int a,b,x,y,z;
    cin >> a >> b >> x >> y >> z;
    if(check(a, b, x, y, z)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}