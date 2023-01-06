#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[31], b[31];
	int sum = 0;
	int temp;

	for (int i = 1; i <= 30; i++) {
		b[i] = i;
	}

	for (int i = 1; i <= 28; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	for (int i = 1; i <= 28; i++) {
		b[a[i]] = 0;
	}
	for (int i = 1; i <= 30; i++) {
		if (b[i] != 0) {
			printf("%d\n", b[i]);

		}
	}
	return 0;


}