#include <iostream>
using namespace std;

int main() {
	int num, val = 5, sum = 0;
	cin >> num;
	while (num) {
		sum += num / val;
		num /= val;
	}
	cout << sum << '\n';
}