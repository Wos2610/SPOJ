#include<iostream>

using namespace std;

int main(){
    int n, v0, vmax, a, b;
    cin >> n >> v0 >> vmax >> a >> b;

    int sum = v0;
    int temp = v0;
    int count = 1;
    for(int i = 1; ; i++){
         if(sum >= n){
            break;
        }
        temp += a;
        if(temp > vmax){
            temp = vmax;
        }
        temp -= b;
        sum += temp;
        count++;
    }
    cout << count;
    return 0;
}