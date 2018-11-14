#include <stdio.h>
#include <iostream>
using namespace std;
/*
int main() {
	int num, sum = 0, max = -1004, a;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		if (sum == 0) {
			sum = a;
			if (sum > max) max = sum;
		}
		else if (sum > 0) {
			sum += a;
			if (sum > max) max = sum;
		}
		if (sum<0) sum = 0;
	}
	printf("%d\n", max);
} // DP 미사용한 경우
*/
int a[100001], d[100001];
int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	d[0] = a[0];
	for (int i = 1; i < num; i++) {
		d[i] = max(d[i - 1] + a[i], a[i]);
	}
	int max = d[0];
	for (int i = 1; i < num; i++) if (d[i] > max) max = d[i];
	cout << max << '\n';
}
