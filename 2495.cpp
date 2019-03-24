#include <iostream>
#include <string>
using namespace std;
int main() {
	int count, max ;
	string c;
	for(int i=0;i<3;i++){
		int count = 1, max = 1;
		cin >> c;
		for (int i = 1; i < c.size(); i++) {
			if (c[i] == c[i - 1]) {
				count++;
				if (count > max) max = count;
			}
			else count = 1;
		}
		cout << max << '\n';
	}
}