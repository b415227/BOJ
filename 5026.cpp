#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string d;
		int a = 0, b = 0;
		int j = 0;
		cin >> d;
		if (d[0] == 'P') {
			printf("skipped\n");
		}
		else {
			while (d[j] != '+') {
				a *= 10;
				a += d[j]-'0';
				j++;
			}
			j++;
			for (; j < d.size(); j++) {
				b *= 10;
				b += d[j]-'0';
			}
			printf("%d\n", a + b);
		}
	}
}