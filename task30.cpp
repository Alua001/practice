30) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b1, b2, b3;
	cin >> a;
	b1 = (a * a) * (a * a);
	b2 = (a * a) * (a * a) * (a * a);
	b3 = (a * a) * (a * a) * (a * a) * (a * a) * (a * a);
	cout << b1 << " " << b2 << " " << b3 << endl;
	return 0;
}
