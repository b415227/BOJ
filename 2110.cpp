#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a(200000);
int n, c;
bool possible(int c, int x) {
	int count = 1;
	int last = a[0];
	for (int home : a) {
		if (home - last >= x) {
			count++;
			last = home;
		}
	}
	return count >= c;
}
int main() {
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.begin() + n);
	int left = 1, right = a[n - 1] - a[0];
	int ans = left;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (possible(c, mid)) {
			if (ans < mid) ans = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	cout << ans << '\n';
}