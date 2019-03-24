#include <iostream>
using namespace std;

int d[31];

int main() {
	int num;
	cin >> num;
	d[0] = 1;
	for (int i = 2; i <= num; i+=2) {
		d[i] = 3 * d[i - 2];
		for (int j = i - 4; j >= 0; j -= 2) d[i] += d[j] * 2;
	}
	cout << d[num] << '\n';
}