#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100
int main() {
	int arr_1[MAX][MAX];
	int arr_2[MAX][MAX];
	int m;
	int n;

	scanf("%d %d",&m, &n);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d ",&arr_1[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d ",&arr_2[i][j]);
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr_1[i][j] + arr_2[i][j]);
		}
		printf("\n");
	}

	return 0;
}