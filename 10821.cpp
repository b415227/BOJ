#include <iostream>
#include <string>
using namespace std;

int main() {
	string c;
	cin >> c;
	int count = 1;
	for (int i = 0; i < c.length(); i++) {
		if (c[i] == 44) count++;
	}
	cout << count << '\n';
}