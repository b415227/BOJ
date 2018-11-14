#include <iostream>
using namespace std;

int d[100001];

int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		d[i] = i;
		for (int j = 1; j*j <= i; j++) {
			if (d[i] > d[i - j*j] + 1) d[i] = d[i - j*j] + 1;
		}
	}
	cout << d[num] << '\n';
}