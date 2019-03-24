#include <stdio.h>
int arr[1001] = { 1,1,2 };
// bottom-up Çü½Ä
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 3; i <= num; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	printf("%d", arr[num]);

}