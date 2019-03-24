#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	int * arr = (int*)malloc(4 * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
	sort(arr, arr + n);
	int * val = (int*)malloc(4 * n);
	*(val) = *(arr);
	for (int i = 1; i < n; i++) {
		*(val + i) = *(val + i - 1) + *(arr + i);
	}
	for (int i = 0; i < n; i++) {
		sum += *(val + i);
	}
	printf("%d", sum);
}