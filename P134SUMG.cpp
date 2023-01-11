#include<iostream>

using namespace std;

struct Food{
    int sour;
    int spicy;
};

Food f[100];

int main(){
    int n;
    cin >> n;
    long long sum = 1;
    long long mul = 0;
    for(int i = 1; i <= n; i++){
        cin >> f[i].sour >> f[i].spicy;
        sum *= f[i].sour;
        mul += f[i].spicy;
    }
    cout << abs(sum - mul);
}