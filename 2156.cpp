#include <iostream>

using namespace std;

int a[10001], d[10001][3];
int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main(){
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	d[0][1] = a[0];
	for (int i = 1; i < num; i++) {
		d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));
		d[i][1] = d[i - 1][0] + a[i];
		d[i][2] = d[i - 1][1] + a[i];
	}
	cout << max(d[num - 1][0], max(d[num - 1][1], d[num - 1][2])) << '\n';
}