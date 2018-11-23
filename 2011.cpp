#include <iostream>
#include <string>
#define mod 1000000;
using namespace std;

int d[5001] = { 1 };
int main() {
	string a;
	cin >> a;
	a = ' ' + a;
	for (int i = 1; i <= a.length(); i++) {
		int x = a[i] - '0';
		if (x >= 1 && x <= 9) d[i] = (d[i] + d[i - 1]) % mod;
		if (i == 1) continue;
		if (a[i - 1] == '0') continue;
		x = (a[i - 1] - '0') * 10 + (a[i] - '0');
		if (x >= 10 && x <= 26) d[i] = (d[i] + d[i - 2]) % mod;
	}
	cout << d[a.length()-1] << '\n';
}
