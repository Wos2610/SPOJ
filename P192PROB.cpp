#include<iostream>

using namespace std;


// d > x > v
int main() {
	int v, x, d;
    cin >> v >> x >> d;
    long long sum = 0;
    for(int i = v; i >= 0; i--){
        if(i + 1 <= x && i + 2 <= d){
            sum = i + i + 1 + i + 2;
            break;
        }
    }
    cout << sum;
}