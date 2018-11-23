#include <stdio.h>

int main() {
	int num, val, count;
	scanf("%d", &num);
	count = num;
	for (int i = 0; i < num; i++) {
		scanf("%d", &val);
		if (val == 1) count--;
		for (int j = 2; j < val; j++) {
			if (val%j == 0) {
				count--;
				break;
			}
		}
	}
	printf("%d", count);
}