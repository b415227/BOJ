#include<iostream>
#include <string>
using namespace std;
int p[8];

int main() {
	string a;
	cin >> a;
	for (int i=0;i<a.length();i++) {
		if (a[i] == '1' || a[i] == 'Q' || a[i] == 'A' || a[i] == 'Z') p[0]++;
		if (a[i] == '2' || a[i] == 'W' || a[i] == 'S' || a[i] == 'X') p[1]++;
		if (a[i] == '3' || a[i] == 'E' || a[i] == 'D' || a[i] == 'C') p[2]++;
		if (a[i] == '4' || a[i] == 'R' || a[i] == 'F' || a[i] == 'V') p[3]++;
		if (a[i] == '5' || a[i] == 'T' || a[i] == 'G' || a[i] == 'B') p[3]++;
		if (a[i] == '6' || a[i] == 'Y' || a[i] == 'H' || a[i] == 'N') p[4]++;
		if (a[i] == '7' || a[i] == 'U' || a[i] == 'J' || a[i] == 'M') p[4]++;
		if (a[i] == '8' || a[i] == 'I' || a[i] == 'K' || a[i] == ',') p[5]++;
		if (a[i] == '9' || a[i] == 'O' || a[i] == 'L' || a[i] == '.') p[6]++;
		if (a[i] == '0' || a[i] == 'P' || a[i] == ';' || a[i] == '/') p[7]++;
		if (a[i] == '-' || a[i] == '[' || a[i] == '\'') p[7]++;
		if (a[i] == '=' || a[i] == ']' ) p[7]++;
	}
	for (int i = 0; i < 8; i++) printf("%d\n", p[i]);
}