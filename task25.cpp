25) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int w, m, y;
	cin >> w >> m >> y;
	int d1, d2, d3, d;
	d1 = w * 7;
	d2 = m * 30;
	d3 = 12 * 30 * y;
	d = d1 + d2 + d3;
	cout << d << " " << endl;
	return 0;
}
