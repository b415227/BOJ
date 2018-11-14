#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string c;
	cin >> c;
	vector<int> val, sign;
	int a = 0;
	sign.push_back(1);
	for (int i = 0; i < c.length(); i++) {
		if (c[i] == '+' || c[i] == '-') {
			if (c[i] == '+') sign.push_back(1);
			else sign.push_back(-1);
			val.push_back(a);
			a = 0;
		}
		else a = a * 10 + (c[i] - '0');
	}
	int sum = 0;
	val.push_back(a);
	bool minus = false;
	for (int i = 0; i < val.size(); i++) {
		if (sign[i] == -1) {
			minus = true;
		}
		if (minus) sum -= val[i];
		else sum += val[i];
	}
	cout << sum << '\n';
}