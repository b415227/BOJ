#include <iostream>
using namespace std;
int n, m;
int a[10000];
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	if (n < m) cout << n << '\n';
	else {
		long long left = 0;
		long long right = 2000000000LL * 1000000LL;
		while (left <= right) {
			long long mid = (left + right) / 2;
			long long begin = 0, end = m;
			for (int i = 0; i < m; i++) {
				end += mid / a[i];
			}
			begin = end;
			for (int i = 0; i < m; i++) {
				if (mid%a[i] == 0) begin--;
			}
			begin++;
			if (n < begin) right = mid - 1;
			else if (n > end) left = mid + 1;
			else {
				for (int i = 0; i < m; i++) {
					if (mid%a[i] == 0) {
						if (n == begin) {
							cout << i + 1 << '\n';
							return 0;
						}
						begin++;
					}
				}
			}
		}
	}
}