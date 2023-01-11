#include<iostream>
#include<algorithm>
#include<string>

#define MOD 1000000007

using namespace std;

int a[6] = {0};

struct Line{
    int num;
    int count = 0;
};

Line save[16];

int isAppear(int index, int x){
    for(int i = 0; i < index; i++){
        if(x == save[i].num){
            return i;
        }
    }
    return -1;
}

void check(int index){
    if(index > 3){
        cout << "Alien";
        return;
    }
    if(index == 1){
        cout << "Elephant";
        return;
    }
    if(index == 2){
        for(int i = 0; i < index; i++){
            if(save[i].count == 1){
                cout << "Bear";
                return;
            }
            else if(save[i].count == 2){
                cout << "Elephant";
                return;
            }
            else if(save[i].count == 3){
                cout << "Alien";
                return;
            }
        }
    }
    int mark = 0;
    if(index == 3){
        for(int i = 0; i < index; i++){
            if(save[i].count == 4){
                cout << "Bear";
                mark = 1;
                return;
            }
        }
    }
    if(mark == 0){
        cout << "Alien";
        return;
    }
}

int main(){
    int index = 0;
    for(int i = 0; i < 6; i++){
        cin >> a[i];
        if(isAppear(index, a[i]) == -1){
            save[index].num = a[i];
            save[index].count = 1;
            index++;
        }
        else{
            save[isAppear(index, a[i])].count++;
        }
    }
    check(index);
    return 0;
} 