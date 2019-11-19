#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b;
	int x;
	double c;
	cin >> a >> b >> x;
	c = pow(((x * x) + b), 1 / 5) - ((b * b) * pow(sin(x + a), 3) / x);
	cout << c << endl;
	return 0;
}
