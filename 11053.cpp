#include <iostream>

using namespace std;
int a[1001];
int d[1001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		d[i] = 1;
		for (int j = 1; j < i; j++) {
			if (a[i] > a[j] && d[j] >= d[i]) d[i] = d[j] + 1;
		}
	}
	int max = 0;
	for (int i = 1; i <= n; i++) if (d[i] > max) max = d[i];
	cout << max << '\n';
}