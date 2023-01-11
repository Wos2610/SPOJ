#include<iostream>
#include<string>
#include<vector>

using namespace std;

void sum(string a, string b) {

	string ans;
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
	cout << ans << "\n";
}

void sub(string a, string b) {
	if (a == b) {
		printf("0\n");
		return;
	}
	string ans;
	int rem = 0;
	int tmp = 0;
	int sign = 0;
	while (a.size() < b.size()) {
		a = '0' + a;
	}
	while (a.size() > b.size()) {
		b = '0' + b;
	}
	if (a < b) {
		sign = 1;
		swap(a, b);
	}
	a = '0' + a;
	b = '0' + b;
	for (int i = b.size(); i >= 1; i--) {
		if (a[i] < b[i]) {
			tmp = a[i] + 10 - b[i] ;
			rem = 1;
		}
		else {
			tmp = a[i] - b[i] ;
			rem = 0;
		}
		b[i - 1] += rem;
		ans += (tmp % 10 + '0');
	}

	ans.erase(ans.begin());

	reverse(ans.begin(), ans.end());
	if (sign) {
		cout << "-";
	}

	int count = 0;
	for (int i = 0; i < ans.size() - 1; i++) {
		if (ans[i] == 0) {
			count++;
		}
		else {
			break;
		}
	}

	for (int i = count; i < ans.size(); i++) {
		cout << ans[i];
	}
	cout << "\n";
}

void mul(string a, string b) {
	int l1 = a.length();
	int l2 = b.length();
	if (l1 == 0 || l2 == 0) {
		cout << "0";
		return;
	}
	vector<int> result(l1 + l2, 0);

	int i1 = 0;
	int i2 = 0;

	for (int i = l1 - 1; i >= 0; i--) {
		int rem = 0;
		int n1 = a[i] - '0';
		i2 = 0;
		for (int j = l2 - 1; j >= 0; j--) {
			int n2 = b[j] - '0';
			int sum = n1 * n2 + result[i1 + i2] + rem;
			rem = sum / 10;
			result[i1 + i2] = sum % 10;
			i2++;
		}
		result[i1 + i2] += (char)rem;
		i1++;
	}

	reverse(result.begin(), result.end());
	int count = 0;
	for (int i = 0; i < result.size() - 1; i++) {
		if (result[i] == 0) {
			count++;
		}
		else {
			break;
		}
	}

	for (int i = count; i < result.size(); i++) {
		cout << result[i];
	}
}


int main() {
	string a, b;
	getline(cin, a);
	getline(cin, b);
	sum(a, b);

	sub(a, b);

	mul(a, b);
	return 0;
} 