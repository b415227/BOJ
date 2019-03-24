#include <iostream>

using namespace std;
int arr[13] = { 0,1,2,4 };

int main() {
	int num, val;
	cin >> num;
	for (int i = 4; i < 13; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (int i = 0; i < num; i++) {
		cin >> val;
		cout << arr[val] << '\n';
	}
}