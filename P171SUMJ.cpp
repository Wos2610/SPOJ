#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	double x, x1, x2;
	if(a == 0){
		if(b == 0 && c != 0){
			cout << "0";
		}
		else if(b == 0 && c == 0){
			cout << "-1";
		}
		else{
			x = -c/b;
            cout << "1\n";
			cout << setprecision(5) << fixed << x;
		}
	}
	else{
		double denta =  b * b - 4 * a * c;
		if(denta < 0){
			cout << "0";
		}
		else if(denta == 0){
			x = -b/(2 * a);
			cout << "1\n";
			cout << setprecision(5) << fixed << x;
		}
		else{
			x1 =  (-b + sqrt(denta)) / (2 * a);
			x2 =  (-b - sqrt(denta)) / (2 * a);
			if(x1 > x2){
				cout << "2\n";
			    cout << setprecision(5) << fixed << x2 << "\n";
                cout << setprecision(5) << fixed << x1 ;
			}
			if(x2 > x1){
				cout << "2\n";
			    cout << setprecision(5) << fixed << x1 << "\n";
                cout << setprecision(5) << fixed << x2 ;
			}
		}
	}	
	return 0;
}