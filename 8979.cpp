#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<pair<long long, int>> a(n);
	for (int i = 0; i < n; i++) {
		int b, c, d, e;
		cin >> b >> c >> d >> e;
		a[i].first = c * 10000000000 + d * 100000 + e;
		a[i].second = b;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n - 1; i++) {
		if (a[i].second == k) {
			if (a[i + 1].second == k) {
				cout << n - i - 1 << '\n';
				return 0;
			}
			else {
				cout << n - i << '\n';
				return 0;
			}
		}
	}
	if (a[n - 1].second == k) {
		cout << 
	}

}