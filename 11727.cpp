#include <iostream>

using namespace std;
int arr[1001] = { 1,1 };

int main() {
	int num;
	cin >> num;
	if(num>1){
		for (int i = 2; i <= num; i++) {
			arr[i] = (arr[i - 1] + 2 * arr[i - 2])%10007;
		}
		
	}
	cout << arr[num];
}