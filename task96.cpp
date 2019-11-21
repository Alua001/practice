#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int n, x = 1;
	cin >> n;
	double sum = 0;
	for (double i = 0;i < n;i++) {
		sum = sum + 1 / cos(pow(x, n));
	}
	cout << sum;
	return 0;
}