#include <iostream>
#include <vector>
using namespace std;
vector<long long> a(1000000);
long long n, m, sum;
bool check(long long mid) {
	sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > mid) sum += a[i] - mid;
	}
	return sum >= m;
}

int main() {
	cin >> n >> m;
	long long left = 0, right = 0, b = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > right) right = a[i];
	}
	while (left <= right) {
		long long mid = (left + right) / 2;
		if (check(mid)) {
			if (mid > b) b = mid;
			left = mid+1;
		}
		else right = mid-1;
	}
	cout << b << '\n';
}