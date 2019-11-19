33) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	double k;
	k = sqrt(x - pow(y, 2));
	cout << k << endl;
	return 0;
}
