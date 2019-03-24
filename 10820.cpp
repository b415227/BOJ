#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		int lower = 0, upper = 0, number = 0, space = 0;
		for (char x : s) {
			if (x >= 'a' &&x <= 'z') lower += 1;
			else if (x >= 'A'&&x <= 'Z') upper += 1;
			else if (x >= '0'&&x <= '9') number += 1;
			else if (x == ' ') space += 1;
		}
		cout << lower << ' ' << upper << ' ' << number << ' ' << space << '\n';
	}
}