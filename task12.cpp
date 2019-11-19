#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x, a;
	const double e=2.718281828459045;
	cin >> x;
	a = pow(e, (x - 2)) + abs(sin(x)) - pow(x, 4) * cos(1 / x);
	cout << a << endl;
	return 0;
}
