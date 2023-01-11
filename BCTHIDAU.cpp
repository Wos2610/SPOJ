#include<iostream>
#include<stdbool.h>
#include<string>
#include<algorithm>

using namespace std;

struct Team{
    string name;
    int c1;
    int t1;
    int c2;
    int t2;
    int c3;
    int t3;
    int c4;
    int t4;
    int count = 0;;
    int mark;
};

Team f[1000];

bool compare(Team f1, Team f2){
    if(f1.count != f2.count){
        return f1.count > f2.count;
    }
    else{
        return f1.mark < f2.mark; 
    }
    
}

void tinh(int n){
    for(int i = 0; i < n; i++){
        if(f[i].t1 != 0){
            f[i].count++;
            f[i].mark += f[i].t1 + (f[i].c1 - 1) * 20;
        }
        if(f[i].t2 != 0){
            f[i].count++;
            f[i].mark += f[i].t2 + (f[i].c2 - 1) * 20;
        }
        if(f[i].t3 != 0){
            f[i].count++;
            f[i].mark += f[i].t3 + (f[i].c3 - 1) * 20;
        }
        if(f[i].t4 != 0){
            f[i].count++;
            f[i].mark += f[i].t4 + (f[i].c4 - 1) * 20;
        }
    }
    sort(f, f + n, compare);

    cout << f[0].name << " " << f[0].count << " " << f[0].mark;
    
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i].name;
        cin >> f[i].c1 >> f[i].t1 >> f[i].c2 >> f[i].t2
        >> f[i].c3 >> f[i].t3 >> f[i].c4 >> f[i].t4;
    }
    tinh(n);
}