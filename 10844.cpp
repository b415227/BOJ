#include <iostream>
#define mod 1000000000
using namespace std;
int d[101][10];
int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= 9; i++) d[1][i] = 1;
	for (int i = 2; i <= num; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j > 0) d[i][j] += d[i - 1][j - 1];
			if (j < 9)d[i][j] += d[i - 1][j + 1];
			d[i][j] %= mod;
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 9; i++) ans += d[num][i];
	ans %= mod;
	cout << ans << '\n';
}