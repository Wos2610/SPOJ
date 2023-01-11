#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int count[45] = {0};
int a[10];

void sum(string a, string b) {
	string ans;
	string ans1;
	int rem = 0;
	int tmp = 0;
	while (a.size() < b.size()) {
		a = '0' + a;
	}
	while (a.size() > b.size()) {
		b = '0' + b;
	}
	for (int i = b.size() - 1; i >= 0; i--) {
		tmp = a[i] + b[i] + rem - 2 * '0';
		ans += (tmp % 10 + '0');
		rem = tmp / 10;
	}
	if (rem) {
		ans += (char)(rem + '0');
	}
    reverse(ans.begin(), ans.end());
    cout << ans;
	
}

void min(string a, string b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '6'){
            a[i] = '5';
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '6'){
            b[i] = '5';
        }
    }
    sum(a,b);
}

void max(string a, string b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '5'){
            a[i] = '6';
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '5'){
            b[i] = '6';
        }
    }
    sum(a,b);
}

int main(){
    string a, b;
    cin >> a >> b;
    min(a,b);
    cout << " ";
    max(a,b);
}