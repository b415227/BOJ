#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct member {
	string name;
	int age, num;
};

bool cmp(const member &u, const member &v) {
	return make_pair(u.age, u.num) < make_pair(v.age, v.num);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n;
	cin >> n;
	vector<member> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i].age >> s[i].name;
		s[i].num = i;
	}
	sort(s.begin(), s.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << s[i].age << ' ' << s[i].name << '\n';
	}
}