#include<iostream>

using namespace std;

int main() {
	int a, b;
    cin >> a >> b;
    int counta = 0, count = 0, countb = 0;
    for(int i = 1; i <= 6; i++){
        if(abs(i - a) < abs(i - b)){
            counta++;
        }
        else if(abs(i - a) == abs(i - b)){
            count++;
        }
        else{
            countb++;
        }
    }
    cout << counta << " " << count << " " << countb;
}