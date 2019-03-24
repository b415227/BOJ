#include <iostream>

using namespace std;
int m[100];
int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a;
		long long sum = 0;
		cin >> a;
		for (int j = 0; j < a; j++) {
			cin >> m[j];
		}
		for (int j = 0; j < a-1; j++) {
			for (int k = j + 1; k < a; k++) {
				sum += gcd(m[j], m[k]);
			}
		}
		cout << sum << '\n';
	}
}