#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string a;
		int count = 0;
		cin >> a;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] == '(') count++;
			else count--;
			if (count < 0) break;
		}
		if (count == 0) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}