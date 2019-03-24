#include <iostream>
using namespace std;

long long d[101] = { 1,1,1,2,2 };
int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int val;
		cin >> val;
		for (int j = 5; j < val; j++) {
			d[j] = d[j - 2] + d[j - 3];
		}
		cout << d[val - 1] << '\n';
	}
}