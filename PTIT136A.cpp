#include<iostream>

using namespace std;

struct Student{
    string name;
    int count = 0;
};

Student s[106];

int check(int index, string x){
    for(int i = 0; i < index; i++){
        if(x == s[i].name){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    int d = 0;
    int index = 0;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(check(index, str) == -1){
            s[index].name = str;
            s[index].count = 1;
            index++;
        }
        else{
            int sum = 0;
            for(int i = 0; i < index; i++){
                sum += s[i].count;
            }

            if(sum - s[check(index, str)].count < s[check(index, str)].count){
                d++;
            }
            s[check(index, str)].count++;
        }
    }
    cout << d;

}