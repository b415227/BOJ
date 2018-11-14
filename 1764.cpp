#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<string> q;
	vector<int> d;
	for (int i = 0; i < n+m; i++) {
		string a;
		cin >> a;
		q.push_back(a);
	}
	sort(q.begin(), q.end());
	for (int i = 1; i < n + m; i++) {
		if (q[i] == q[i - 1]) d.push_back(i);
	}
	cout << d.size() << '\n';
	for (int i = 0; i < d.size(); i++) {
		cout << q[d[i]] << '\n';
	}
}