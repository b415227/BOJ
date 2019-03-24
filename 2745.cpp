#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	long long sum = 0, num;
	cin >> a >> num;
	long long val = 1;
	for (int i = a.length()-1; i >= 0; i--) {
		if (a[i] <= '9'&&a[i]>='0') {
			sum += val*(a[i] - '0');
			val *= num;
		}
		else {
			sum += val*(a[i] - 'A' + 10);
			val *= num;
		}
	}
	cout << sum;
}