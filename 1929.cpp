#include <stdio.h>
int arr[1000001];

int main() {
	int m, n;
	arr[1] = 1;
	scanf("%d %d", &m, &n);
	for (int i = 2; i*i <= n; i++) {
		for (int j = i; i*j <= n; j++) {
			arr[i*j] = 1;
		}
	}
	for (int i = m; i <= n; i++) {
		if (!arr[i]) printf("%d\n", i);
	}
}