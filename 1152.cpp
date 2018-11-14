#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int cnt = 0;
	string s;
	while (cin >> s) {
		cnt += 1;
	}
	cout << cnt << '\n';
}