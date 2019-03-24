#include <stdio.h>
int arr[2000003];

int main() {
	int num, val;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &val);
		arr[val + 1000001] = val + 1000001;
	}
	for (int i = 0; i <2000003; i++) {
		if (arr[i]) printf("%d\n", i - 1000001);
	}
}