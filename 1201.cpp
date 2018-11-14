#include <iostream>
#include <vector>
#include <algorithm>
// 정답찾기위해선 m+k-1<=n<=mk 이어야 한다.
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	if (m + k - 1 <= n&&n <= m*k) {
		for (int i = 0; i < n; i++) {
			a[i] = i + 1;
		}
		vector<int> g; // 수열의 경계 저장벡터
		g.push_back(0); //첫번째 그룹 시작지점
		g.push_back(k); //첫번째 그룹 종료지점(최소하나는 길이가 k)
		n -= k; 
		m -= 1; //그룹이 하나 정해졌기때문에 -1
		// m-1개를 만들 그룹의 원소 개수 정하기
		int gs = m == 0 ? 1 : n / m; // 
		int r = m == 0 ? 0 : n%m; // 몇개를 k+1개로 해야할지
		for (int i = 0; i < m; i++) {
			g.push_back(g.back() + gs + (r > 0 ? 1 : 0)); //다음 그룹의 시작지점 입력
			if (r > 0) r -= 1;
		}
		for (int i = 0; i < g.size() - 1; i++) {
			reverse(a.begin() + g[i], a.begin() + g[i + 1]);
		}
		for (int i = 0; i < a.size(); i++) cout << a[i] << ' ';
		cout << '\n';
	}
	else cout << "-1\n";
}