#include <iostream>
#include <stack>
using namespace std;
char arr[600000];
int main() {
	int i = 0;
	stack<char> left,right;
	cin >> arr;
	while (arr[i]) {
		left.push(arr[i]);
		i++;
	}
	cin >> i;
	for (int j = 0; j < i; j++) {
		char a;
		cin >> a;
		if (a == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (a == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (a == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else {
			cin >> a;
			left.push(a);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
}