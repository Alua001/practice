#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a >> b;
	c = ((a + (4 * b)) * (a - (3 * b))) + (a * a);
	cout << c << endl;
	return 0;
}
