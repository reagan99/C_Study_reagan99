#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	int n;
	int price=0;
	int i = 0;
	int price_1;
	int n_1;
	scanf("%d %d", &x, &n);
	
	while (i < n) {
		scanf("%d %d", &price_1, &n_1);
		price += price_1 * n_1;


		i++;
	}
	if (x == price) {
		printf("Yes");
	}
	else printf("No");

	return 0;
}