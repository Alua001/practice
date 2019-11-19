21) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b, c, p, s;
	cin >> a >> b;
	c = sqrt((a * a) + (b * b));
	p = a + b + c;
	s = (a * b) / 2;
	cout << c << " " << p << " " << s << endl;
	return 0;
}
