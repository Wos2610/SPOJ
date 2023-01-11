#include<iostream>
#include<algorithm>
using namespace std;

struct Number{
    int stt;
    int num;
    int count = 0;
};

Number save[1006];

int isAppear(int index, int x){
    for(int i = 0; i < index; i++){
        if(x == save[i].num){
            return i;
        }
    }
    return -1;
}

bool compare(Number s1, Number s2){
    if(s1.count != s2.count){
        return s1.count > s2.count;
    }
    return s1.stt < s2.stt;
}

int main(){
    int n, c;
    cin >> n >> c;
    int index = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(isAppear(index, x) == -1){
            save[index].stt = index;
            save[index].num = x;
            save[index].count = 1;
            index++;
        }
        else{
            save[isAppear(index, x)].count++;
        }
    }
    sort(save, save + index, compare);
    // for(int i = 0; i < index; i++){
    //         cout << save[i].count << " ";
    // }
    for(int i = 0; i < index; i++){
        while(save[i].count != 0){
            cout << save[i].num << " ";
            save[i].count--;
        }
    }
    return 0;
}  