#include <iostream>
#include <vector>
using namespace std;
long long a[10000];
int n, m;
bool check(long long x) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += a[i] / x;
	}
	return cnt >= m;
}

int main() {
	cin >> n >> m;
	long long max = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (max < a[i]) max = a[i];
	}
	long long ans = 0, l = 1, r = max;
	while (l <= r) {
		long long mid = (l + r) / 2;
		if (check(mid)) {
			if (ans < mid) {
				ans = mid;
			}
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout << ans << '\n';
}