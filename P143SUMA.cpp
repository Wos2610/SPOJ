#include<iostream>
#include<algorithm>

using namespace std;

struct Dragon{
    int x;
    int y;
};
Dragon f[1000];

bool compare(Dragon s1, Dragon s2){
    if(s1.x != s2.x){
        return s1.x < s2.x;
    }
    return s1.y < s2.y;
}

int main(){
    int n, s;
    cin >> s >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i].x >> f[i].y;
    }
    
    sort(f, f + n, compare);

    int mark = 1;
    for(int i = 0; i < n; i++){
        if(s > f[i].x){
            s += f[i].y;
        }
        else{
            cout << "NO\n";
            mark = 0;
            break;
        }
    }
    if(mark == 1){
        cout << "YES\n";
    }
} 