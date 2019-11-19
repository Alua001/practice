47) #include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c ;
	int max = INT_MIN;
	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	cout << max << endl;
	return 0;
}
