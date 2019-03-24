#include <stdio.h>

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	while (k > 0) {
		if (n >= 2 * m) {
			n--;
			k--;
		}
		else {
			m--;
			k--;
		}
	}
	if (n >= 2 * m) printf("%d\n", m);
	else printf("%d\n", n / 2);
}