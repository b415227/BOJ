#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].second >> a[i].first;
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++) {
		cout << a[i].second << ' ' << a[i].first << '\n';
	}
}