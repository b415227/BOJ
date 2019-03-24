#include <iostream>
using namespace std;
bool d[10001];
int main() {

	for (int i = 2; i <= 10000; i++) {
		for (int j = i*i; j < 10000; j += i) d[j] = true;
	}
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int i = n / 2;
		while(1) {
			if (d[i] == false && d[n-i] == false) {
				cout << i << ' ' << n-i << '\n';
				break;
			}
			i--;
		}
	}
}