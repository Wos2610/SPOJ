#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Team{
    string name;
    int mark;
};

Team f[26];

string john;
string opp;

bool compare(Team f1, Team f2){
    if(f1.mark != f2.mark){
        return f1.mark > f2.mark;
    }
    return f1.name < f2.name;
}

void hienThi(int n){
    // John win, opp lose
    for(int i = 0; i < n; i++){
        if(john == f[i].name){
            f[i].mark += 3;
        }
    }
    
    sort(f, f + n, compare);

    for(int i = 0; i < n; i++){
        if(john == f[i].name){
            cout << i + 1 << " ";
            f[i].mark -= 3;
            break;
        }
    }


    // John lose, opp win
    for(int i = 0; i < n; i++){
        if(opp == f[i].name){
            f[i].mark += 3;
        }
    }
    sort(f, f + n, compare);

    for(int i = 0; i < n; i++){
        if(john == f[i].name){
            cout << i + 1 << " ";
            break;
        }
    }


    // John, opp ==
    for(int i = 0; i < n; i++){
        if(john == f[i].name){
            f[i].mark += 1;
        }
        if(opp == f[i].name){
            f[i].mark += (-3 + 1);
        }
    }

    sort(f, f + n, compare);

    for(int i = 0; i < n; i++){
        if(john == f[i].name){
            cout << i + 1 << "\n";
            break;
        }
    }
    
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        cin >> john;
        cin >> opp;
        for(int i =  0; i < n; i++){
            cin >> f[i].name;
            cin >> f[i].mark;
        }
        hienThi(n);
    }
}