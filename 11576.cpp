#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int s[26], c[26];
int main() {
	int a, b, m;
	cin >> a >> b >> m;
	for (int i = 0; i < m; i++) {
		cin >> s[i];
	}
	int val = 1, sum = 0;
	for (int i = m - 1; i >= 0; i--) {
		sum += val*s[i];
		val *= a;
	}
	int num = 0;
	while (sum) {
		c[num] = sum%b;
		sum = sum / b;
		num++;
	}
	reverse(c, c + num);
	for (int i = 0; i < num; ++i) {
		cout << c[i] << " \n"[i == m - 1];
	}
}