#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int count = 0;
	stack<int> a;
	string b;
	cin >> b;
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '(') a.push(i);
		else {
			if (a.top() == i - 1) {
				a.pop();
				count += a.size();
			}
			else {
				a.pop();
				count++;
			}
		}
	}
	cout << count << "\n";
}
