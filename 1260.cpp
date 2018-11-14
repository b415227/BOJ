#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> a[1001];
bool check[1001];
void dfs(int x) {
	check[x] = true;
	cout << x << ' ';
	for (int i = 0; i < a[x].size(); i++) {
		int next = a[x][i];
		if (check[next] == false) dfs(next);
	}
}

void bfs(int x) {
	queue<int> q;
	memset(check, false, sizeof(check));
	check[x] = true;
	q.push(x);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node << ' ';
		for (int i = 0; i < a[node].size(); i++) {
			int next = a[node][i];
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}

int main() {
	int n, m, start;
	cin >> n >> m >> start;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}
	dfs(start);
	puts("");
	bfs(start);
	puts("");
}
/*
#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;
struct Edge {
	int from, to;
};
Edge edge[20001];
int cnt[1001];
bool check[1001];
bool cmp(const Edge &u, const Edge &v) {
	if (u.from == v.from) {
		return u.to < v.to;
	}
	else {
		return u.from < v.from;
	}
}
void dfs(int node) {
	check[node] = true;
	printf("%d ", node);
	for (int i = cnt[node - 1]; i<cnt[node]; i++) {
		int next = edge[i].to;
		if (check[next] == false) {
			dfs(next);
		}
	}
}
void bfs(int start) {
	queue<int> q;
	q.push(start);
	check[start] = true;
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		printf("%d ", node);
		for (int i = cnt[node - 1]; i<cnt[node]; i++) {
			int next = edge[i].to;
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}
int main() {
	int n, m, start;
	scanf("%d %d %d", &n, &m, &start);
	for (int i = 0; i<m; i++) {
		scanf("%d %d", &edge[i].from, &edge[i].to);
		edge[i + m].from = edge[i].to;
		edge[i + m].to = edge[i].from;
	}
	m *= 2;
	sort(edge, edge + m, cmp);
	for (int i = 0; i<m; i++) {
		cnt[edge[i].from] += 1;
	}
	for (int i = 1; i <= n; i++) {
		cnt[i] += cnt[i - 1];
	}
	dfs(start);
	printf("\n");
	memset(check, false, sizeof(check));
	bfs(start);
	printf("\n");
	return 0;
}
*/