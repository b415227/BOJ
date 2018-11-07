#include <iostream>
#define min(a,b) ((a>b)? (b) : (a))
using namespace std;
int d[1000][3];
int a[1000][3];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++) d[0][i] = a[0][i];
	for (int i = 1; i < n; i++) {
		d[i][0] = min(d[i - 1][1] + a[i][0], d[i - 1][2] + a[i][0]);
		d[i][1] = min(d[i - 1][0] + a[i][1], d[i - 1][2] + a[i][1]);
		d[i][2] = min(d[i - 1][0] + a[i][2], d[i - 1][1] + a[i][2]);
	}
	cout << min(d[n - 1][0], min(d[n - 1][1], d[n - 1][2])) << '\n';
}