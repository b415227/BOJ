#include <stdio.h>

int main() {
	long long arr[92] = { 1,1 };
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num - 1; i++) {
		arr[i + 2] = arr[i + 1] + arr[i];
	}
	printf("%lld", arr[num - 1]);
}