#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;

	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int start = 0;
	int len = 0;
	for (int i = 0; i < n - 1; i++) {
		if (v[i] < v[i + 1]) {
			if (v[i + 1] - v[start] > len) len = v[i + 1] - v[start];
		}
		else start = i+1;
	}
	cout << len << '\n';
}