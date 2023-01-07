#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int hap=0;
	scanf("%d", &a);
	while (a > 0) {
		if (a % 2 == 1) {
			hap++;
		}
		a /= 2;
	}
	printf("%d", hap);
	return 0;
}