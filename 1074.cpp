#include <iostream>
using namespace std;
int mul(int a) { return (1 << a); }
int solve(int r, int c, int n) {
	if (n == 1) return 2 * r + c;
	else {
		if (r < mul(n - 1)) {
			if (c < mul(n - 1)) return solve(r, c, n - 1);
			else return solve(r, c - mul(n - 1), n - 1) + mul(2 * n - 2);
		}
		else {
			if (c < mul(n - 1)) return solve(r - mul(n - 1), c, n - 1) + mul(2 * n - 2) * 2;
			else return solve(r - mul(n - 1), c - mul(n - 1), n - 1) + mul(2 * n - 2) * 3;
		}
	}
}
int main() {
	int n, r, c, num = 1;
	cin >> n >> r >> c;
	for (int i = 0; i < n; i++) num *= 2;
	cout << solve(r, c, num) << '\n';
}
