17) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int d, x;
	d = (a + b + c) / 3;
	x = 2 * (a + c) - (3 * b);
	cout << d << " " << x << endl;
	return 0;
}
