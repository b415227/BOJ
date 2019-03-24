#include <iostream>

using namespace std;
int a[1001];
int d1[1001];
int d2[1001];
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		d1[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[i] > a[j] && d1[j] >= d1[i]) d1[i] = d1[j] + 1;
		}
	}
	for (int i = n; i>=1; i--) {
		d2[i] = 1;
		for (int j = n; j >=i; j--) {
			if (a[i] > a[j] && d2[j] >= d2[i]) d2[i] = d2[j] + 1;
		}
	}
	int max = d1[1]+d2[1];
	for (int i = 2; i <= n; i++) if (d1[i] + d2[i] > max) max = d1[i] + d2[i];
	cout << max - 1 << '\n';


}