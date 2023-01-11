#include<iostream>
#include<algorithm>

using namespace std;

long long t[100006] = {0};

void check(int n){
    int count = 0;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        if(t[i] >= sum){
            sum += t[i];
            count++;
        }
    }
    cout << count;
}

int main(){
	int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }
    sort(t, t + n);
    check(n);
	return 0;
}