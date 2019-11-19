32) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, a, b, c, x1;
	cin >> x;
	c = x / 100;
	a = x / 10 % 10;
	b = x % 10;
	x1 = a * 100 + b * 10 + c;
	cout << x1 << endl;
	return 0;
}
