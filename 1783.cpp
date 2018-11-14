#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	if (n == 1) cout << "1\n";
	else if (n == 2) {
		if ((1 + m) / 2 > 4) cout << "4\n";
		else cout << (1 + m) / 2 << '\n';
	}
	else {
		if (m > 6) {
			cout << m - 2 << '\n';
		}
		else {
			if (m < 4) cout << m << '\n';
			else cout << "4\n";
		}
	}
}