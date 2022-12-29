#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pac(int i) {
	if (i == 1 || i==0) {
		return 1;
	
	}
	return i * pac(i - 1);
	
}
int main() {
	int n;
	scanf("%d", &n);

	printf("%d", pac(n));
	
	return 0;
}