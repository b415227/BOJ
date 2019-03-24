#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct score {
	string s;
	int kor, eng, math;
};

bool cmp(const score &u, const score &v) {
	if (u.kor > v.kor) return true;
	else if (u.kor == v.kor) {
		if (u.eng < v.eng) return true;
		else if (u.eng == v.eng) {
			if (u.math > v.math) return true;
			else if (u.math == v.math) return u.s < v.s;
		}
	}
	return false;
}
/*
bool cmp(const score &u, const score &v){
return make_tuple(-u.kor,u.eng,-u.math,u.name) < make_tuple(-v.kor,u.eng,-u.math,u,name);
*/

int main() {
	int num;
	cin >> num;
	vector<score> a(num);
	for (int i = 0; i < num; i++) {
		cin >> a[i].s >> a[i].kor >> a[i].eng >> a[i].math;
	}
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < num; i++) {
		cout << a[i].s << '\n';
	}
}