#include<iostream>
#include<string>

using namespace std;

int index1[26] = {0};
int index2[26] = {0};

int main() {
	string str;
    cin >> str;
    str = ' ' + str;
    for(int i = 1; i <= 52; i++){
        if(index1[str[i] - 'A'] == 0){
            index1[str[i] - 'A'] = i;
        }
        else{
            index2[str[i] - 'A'] = i;
        }
    }
    int count = 0;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++){
            if(index1[i] < index1[j] && index1[j] < index2[i] && index2[i] < index2[j]){
                count++;
            }
        }
        
        // cout << index1[i] << " " << index2[i] << "\n";
    }
    cout << count;
}