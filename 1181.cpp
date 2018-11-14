#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
	return make_pair(a.size(), a) < make_pair(b.size(), b);
}

int main() {
	int num;
	cin >> num;
	vector<string> d;
	string a;
	for (int i = 0; i < num; i++) {
		cin >> a;
		d.push_back(a);
	}
	sort(d.begin(), d.end(), cmp);
	d.erase(unique(d.begin(), d.end()),d.end());
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << '\n';
	}
}