#include <stdio.h>

int arr[1000001] = { 1,1 };

int main() {
	for (int i = 2; i*i < 1000001; i++) {
		for (int j = i; j*i < 1000001; j++) {
			arr[i*j] = 1;
		}
	}
	int num;
	while (1) {
		scanf("%d", &num);
		if (num == 0) break;
		for (int i = 0; i < 500000; i++) {
			if (arr[i] == 0 && arr[num - i] == 0) {
				printf("%d = %d + %d \n", num, i, num - i);
				break;
			}
		}
	}
}