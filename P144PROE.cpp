#include<iostream>
#include<algorithm>
#include<string>

#define MOD 1000000007

using namespace std;

struct Save{
    int num1;
    int num2;
};

Save s[100006];

bool compare(Save s1, Save s2){
    if(s1.num1 != s2.num1){
        return s1.num1 < s2.num1;
    }
    return s1.num2 <s2.num2;
}

int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int index = 0;
    for(int i = a; i <= x; i++){
        for(int j = b; j <= y; j++){
            if(j < i){
                s[index].num1 = i;
                s[index].num2 = j;
                index++;
            }
            else{
                break;
            }
        }
    }

    sort(s, s + index, compare);

    cout << index << "\n";
    for(int i = 0; i < index; i++){
        cout << s[i].num1 << " " << s[i].num2 << "\n";
    }

    return 0;
} 