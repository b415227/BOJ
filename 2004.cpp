#include <iostream>
using namespace std;
int min(int a, int b) {
	if (a > b) return b;
	else return a;
}
int main() {
	int n, m, sum2=0, sum5=0;
	cin >> n >> m;
	int n1 = n, m1 = m;
	while (n1) {
		sum2 += n1 / 2;
		n1 /= 2;
	}
	n1 = n;
	while (n1) {
		sum5 += n1 / 5;
		n1 /= 5;
	}
	while (m1) {
		sum2 -= m1 / 2;
		m1 /= 2;
	}
	m1 = m;
	while (m1) {
		sum5 -= m1 / 5;
		m1 /= 5;
	}
	n1 = n - m;
	while (n1) {
		sum2 -= n1 / 2;
		n1 /= 2;
	}
	n1 = n - m;
	while (n1) {
		sum5 -= n1 / 5;
		n1 /= 5;
	}
	cout << min(sum2, sum5) << '\n';
}