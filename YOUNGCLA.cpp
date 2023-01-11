#include<iostream>
#include<string>
#include<stdbool.h>
#include<algorithm>

using namespace std;

struct People{
    string name;
    int day;
    int month;
    int year;
};

People p[106];

bool compare(People p1, People p2){
    if(p1.year != p2.year){
        return p1.year > p2.year;
    }
    if(p1.month != p2.month){
        return p1.month > p2.month;
    }
    return p1.day > p2.day;

}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i].name;
        cin >> p[i].day >> p[i].month >> p[i].year;
    }
    sort(p, p + n, compare);

    cout << p[0].name << "\n";
    cout << p[n - 1].name;
}
