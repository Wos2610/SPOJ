#include<iostream>
#include<algorithm>

using namespace std;

double a[100006] = {0};

void check(int n, double L){
    double max = a[0];
    double x = 0;
    for(int i = 1; i < n; i++){
        x = (a[i] - a[i - 1])/2;
        if(x > max){
            max = x;
        }
    }
    x = L - a[n - 1];
    if(x > max){
        max = x;
    }
    printf("%0.10f", max);
}
int main(){
	int n;
    double L;
    cin >> n >> L;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    check(n, L);
	return 0;
}