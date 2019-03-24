#include <iostream>
#include <algorithm>
using namespace std;
int arr[10];
int main() {
	int count = 1;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] = arr[i] % 42;
	}
	sort(arr, arr + 10);
	for (int i = 0; i < 9; i++) {
		if (arr[i] != arr[i + 1]) count++;
	}
	cout << count << '\n';
}