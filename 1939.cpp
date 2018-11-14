#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<pair<int, int>> a[10001];
bool c[10001];
int n, m, st, ed;
bool go(int node, int limit) {
	if (c[node]) return false;
	c[node] = true;
	if (node == ed) {
		return true;
	}
	for (auto &p : a[node]) {
		int next = p.first;
		int cost = p.second;
		if (cost >= limit) if (go(next, limit)) return true;
	}
	return false;
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		a[x].push_back(make_pair(y, z));
		a[y].push_back(make_pair(x, z));
	}
	cin >> st >> ed;
	int left = 1, right = 1000000000;
	int ans = 0;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		memset(c, false, sizeof(c));
		if (go(st, mid)) {
			ans = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}
	cout << ans << '\n';
}