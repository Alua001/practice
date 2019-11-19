27) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	a = a + b;
	b = c - b;
	c = c + b;
	cout << a << " " << b << " " << c << endl;
	return 0;
}
