20) #include<iostream>
#include<cmath>
using namespace std;
int main() {
	int s, t, v;
	cin >> s >> t;
	s = s * 1000;
	t = t * 60;
	v = s / t;
	cout << v << endl;
	return 0;
}
