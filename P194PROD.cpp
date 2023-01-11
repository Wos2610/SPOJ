#include<iostream>
#include<algorithm>

using namespace std;

int a[4] = {0};

int main() {
	int n;
    cin >> n ;
    if(n == 0){
        cout << "0";
        return 0;
    }
    int minindex = 999999;
    int maxindex = -999999;
    int min = 999999;
    int max = -999999;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] < min){
            minindex = i;
            min = a[i];
        }
        if(a[i] > max){
            maxindex = i;
            max = a[i];
        }
    }
    if(min == max){
        cout << "0";
        return 0;
    }
    
    a[0] = minindex - 1;
    a[1] = n - minindex;
    a[2] = maxindex - 1;
    a[3] = n - maxindex;
    sort(a , a + 4);
    
    cout << a[3];
    return 0;
}