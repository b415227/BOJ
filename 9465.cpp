#include <iostream>

using namespace std;

int a[100002][2], d[1000002][3];
int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int val;
		cin >> val;
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < val; k++) {
				cin >> a[k][j];
			}
		}
		d[0][1] = a[0][0];
		d[0][2] = a[0][1];
		for (int j = 1; j < val; j++) {
			d[j][0] = max(d[j - 1][0], max(d[j - 1][1], d[j - 1][2]));
			d[j][1] = max(d[j - 1][0], d[j - 1][2]) + a[j][0];
			d[j][2] = max(d[j - 1][0], d[j - 1][1]) + a[j][1];
		}
		cout << max(d[val-1][0], max(d[val-1][1], d[val-1][2])) << '\n';
	}

}