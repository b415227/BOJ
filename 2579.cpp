#include <iostream>
using namespace std;

int a[301], d[301][3];
int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main(){
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}
	d[0][1] = a[0];
	for (int i = 1; i < num; i++) {
		d[i][1] = max(d[i - 2][1],d[i-2][2]) + a[i];
		d[i][2] = d[i - 1][1] + a[i];
	}
	cout << max(d[num - 1][1], d[num - 1][2]);
}
/*  1Â÷¿ø
d[1]=a[1];
d[2]=a[1]+a[2];
for(int i=3; i<=n;i++){
d[i]=max(d[i-2]+a[i],d[i-3]+a[i]+a[i-1];
}
*/