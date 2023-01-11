#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



struct Family {
	struct father {
		string name;
		int age = 0;
	}f;
	struct child {
		string name;
		int age = 0;
	}c;
	int year = 0;
};

Family p[101];

bool comp(Family p1, Family p2) {
	if (p1.f.name == "Ted") {
		return 1;
	}
	return 0;
}
void tinhTuoi(int n) {
	sort(p, p + n, comp);

	for (int i = 0; i < n; i++) {
		if (p[i].f.name == "Ted") {
			p[i].c.age = 100 - p[i].year;
		}
	}
	for (int i = 0; i < n; i++){
		if (p[i].c.age != 0) {
			for (int j = 0; j < n; j++) {
				if (p[i].c.name == p[j].f.name) {
					p[j].f.age = p[i].c.age;
					p[j].c.age = p[j].f.age - p[j].year;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (p[i].c.age == 0) {
			p[i].c.age = p[i].f.age - p[i].year;
		}
	}
}

bool compare(Family p1, Family p2) {
	if (p1.c.age != p2.c.age) {
		return p1.c.age > p2.c.age;
	}
	return p1.c.name < p2.c.name;
}

void sort(Family p[], int n) {
	tinhTuoi(n);
	sort(p, p + n, compare);
	for (int i = 0; i < n; i++) {
		cout << p[i].c.name << " " << p[i].c.age << "\n";
	}
}

int main() {
    int T;
    cin >> T;
    int T1 = T;
    while(T--){
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> p[i].f.name;
            cin >> p[i].c.name;
            cin >> p[i].year;
        }
        cout << "DATASET " << T1 - T << "\n";
        sort(p, n);
    }
	
	return 0;
}