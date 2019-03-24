#include <iostream>
#include <vector>
using namespace std;
int d[10001]; // 가치 k를 만들수 있는 횟수
int a[101]; //각 동전의 금액
int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	d[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = a[i]; j <= k; j++) {
			d[j] += d[j - a[i]];
		}
	}
	cout << d[k] << '\n';

}