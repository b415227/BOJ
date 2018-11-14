#include <iostream>
#include <vector>
using namespace std;

int n, ans = 0;
vector<pair<int, int>> v[10001];
int dfs(int start) {
	int fst = 0, snd = 0, sum;
	for (auto n : v[start]) {
		sum = dfs(n.first) + n.second;
		if (sum > fst) {
			snd = fst;
			fst = sum;
		}
		else if (sum > snd) snd = sum;
	}
	if (ans < (fst + snd)) ans = fst + snd;
	return fst;
}

int main() {
	cin >> n;
	for (int i = 1; i < n; i++) {
		int a, b, w;
		cin >> a >> b >> w;
		v[a].push_back(make_pair(b, w));
	}
	dfs(1);
	cout << ans << '\n';
}