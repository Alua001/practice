35) #include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a < 7) {
		cout << "YES";
	}
	else if (a > 10) {
		cout << "NO";
	}
	else if (a == 9) {
		cout << "ERROR";
	}
	return 0;
}
