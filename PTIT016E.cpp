#include<iostream>
#include<algorithm>
#include<stdbool.h>

using namespace std;

struct Student{
    long long s[11] = {0};
    long long sum = 0;
};

Student f[106];

bool compare(Student f1, Student f2){
    if(f1.sum != f2.sum){
        return f1.sum > f2.sum;
    }
    for(int i = 0; i < 11; i++){
        return f1.s[i] > f2.s[i];
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 11; j++){
            cin >> f[i].s[j];
        }
    }

    long long res = 0;
    res += max(f[j].s[i], max(f[k].s[i], f[l].s[i]));
    cout << res;
}
