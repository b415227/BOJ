#include <iostream>
using namespace std;
int d[10001];
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, val;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> val;
		d[val]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (d[i] > 0) {
			for (int j = 0; j < d[i]; j++) {
				cout << i << '\n';
			}
		}
	}
}