#include <iostream>
#include <algorithm>
using namespace std;
long long d[1000001];

int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> d[i];
	}
	sort(d, d + num);
	long long ans = d[0];
	int ans_count = 1;
	int count = 1;
	for (int i = 1; i < num; i++) {
		if (d[i] == d[i - 1]) count++;
		else count = 1;
		if (ans_count < count) {
			ans_count = count;
			ans = d[i];
		}
	}
	cout << ans << '\n';
}