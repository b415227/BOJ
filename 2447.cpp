#include <iostream>
#include <vector>
using namespace std;
char arr[7000][7000];

void solve(int a,int b, int n,int color) {
	if (color == 0) {
		for (int i = a; i < a + n; i++) {
			for (int j = b; j < b + n; j++) arr[i][j] = ' ';
		}
	}
	else {
		if (n == 1) {
			arr[a][b] = '*';
		}
		else {
			int m = n / 3;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (i == 1 && j == 1) color=0;
					else color = 1;
					solve(a + i*m, b + j*m, m, color);
				}
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	solve(0,0,n,1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}
}