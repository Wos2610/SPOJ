#include<iostream>
#include<vector>

using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
    int t1 = 0;
    int du = 0;
    if(n >= m){
        t1 = m;
        du = n - m;
    }
    else{
        t1 = n;
        du = m - n;
    }
    int t2 = du/2;
    
    cout << t1 << " " << t2;
}