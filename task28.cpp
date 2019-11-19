28) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	double k, sum = 1.0;
	cin >> k >> sum;
	for (int i = 0;i <= 5;i++) {
		sum = (100. + k) / 100.;
	}
	cout << sum << endl;
	return 0;
}
