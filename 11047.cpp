#include <stdio.h>
#include <stdlib.h>
int main() {
	int num, val, count = 0;
	scanf("%d %d", &num, &val);
	int * arr = (int*)malloc(sizeof(int)*num);
	for (int i = 0; i < num; i++) scanf("%d", arr + i);
	for (int i = num - 1; i >= 0; i--) {
		if (val >= *(arr + i)) {
			count += (val) / *(arr + i);
			val %= *(arr + i);
		}
		if (val == 0) break;
	}
	printf("%d", count);
}