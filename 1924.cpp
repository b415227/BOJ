#include <stdio.h>

int main() {
	int mon, day, month[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	scanf("%d %d", &mon, &day);
	for (int i = 1; i < mon; i++) {
		day += month[i];
	}
	if (day % 7 == 1) printf("MON\n");
	else if (day % 7 == 2) printf("TUE\n");
	else if (day % 7 == 3) printf("WED\n");
	else if (day % 7 == 4) printf("TUR\n");
	else if (day % 7 == 5) printf("FRI\n");
	else if (day % 7 == 6) printf("SAT\n");
	else printf("SUN\n");
}