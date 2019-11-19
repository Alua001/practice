48) #include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int max = INT_MIN;
	cin >> a >> b >> c ;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	sum1 = a + b;//1+2=3
	sum2 = b + c;//2+3=5
	sum3 = a + c;//1+3=4
	if (sum1 > sum2&& sum1 > sum3) {
		cout << a << " " << b;
	}
	if (sum2 > sum1&& sum2 > sum3) {
		cout << b << " " << c;
	}
	if (sum3 > sum1&& sum3 > sum2) {
		cout << a << " " << c;
	}
	return 0;
}
