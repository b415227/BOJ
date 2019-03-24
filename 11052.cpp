#include <iostream>
using namespace std;
int d[1002],a[10002];
int max(int a,int b) {
	if (a > b) return a;
	else return b;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			d[i] = max(d[i], d[i - j] + a[j]);
		}
	}
	cout << d[n] << '\n';
}