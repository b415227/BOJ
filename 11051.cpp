#include <iostream>
#define mod 10007
using namespace std;
int d[1001][1001];
int c(int a,int b) {
	if (d[a][b]) return d[a][b];
	if (a == b || b == 0) return 1;
	return d[a][b] = (c(a - 1, b) + c(a - 1, b - 1)) % mod;
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << c(n, k) << '\n';
}