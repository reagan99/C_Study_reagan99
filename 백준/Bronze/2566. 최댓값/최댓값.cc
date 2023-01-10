#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int arr[9][9]={0,};
	int max = 0;
	int i_s, j_s;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] >= max) {
				max = arr[i][j];
				i_s = i;
				j_s = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", i_s+1, j_s+1);
	return 0;
}