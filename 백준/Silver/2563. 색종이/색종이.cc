#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int map[100][100] = { 0, };
	int n;
	int a, b;
	int check = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		for (int j = a - 1; j < a + 9; j++) {
			for (int k = b - 1; k < b + 9; k++) {
				map[j][k] = 1;
			}

		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (map[i][j]) {
				check++;
			}
		}
	}
	printf("%d", check);
	return 0;
}