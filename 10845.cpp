#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (a == "push") {
			int val;
			cin >> val;
			q.push(val);
		}
		else if (a == "pop") {
			if (q.empty()) cout << "-1\n";
			else {
				int num = q.front();
				q.pop();
				cout << num << '\n';
			}
		}
		else if (a == "size") cout << q.size() << '\n';
		else if (a == "empty") {
			if (q.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (a == "front") {
			if (q.empty()) cout << "-1\n";
			else cout << q.front() << '\n';
		}
		else {
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << '\n';
		}
	}
}