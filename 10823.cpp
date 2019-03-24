#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string s, len;
	while (cin >> len) {
		s += len;
	}
	istringstream sin(s);
	string num;
	int sum = 0;
	while (getline(sin, num, ',')) sum += stoi(num);
	cout << sum << '\n';
}