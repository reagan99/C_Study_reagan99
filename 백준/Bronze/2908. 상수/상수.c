#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int re(int a) {
	int a_100;
	int a_10;
	int a_1;
	int r_a;

	a_100 = a / 100;
	a_1 = a % 10;
	a_10 = (a % 100 - a_1);

	r_a = a_10 + a_1 * 100 + a_100;

	return r_a;
}

int main() {
	int m;
	int n;
	scanf("%d", &m);
	scanf("%d", &n);

	if (re(m) > re(n)) {
		printf("%d", re(m));
	}
	else {
		printf("%d", re(n));
	}
	

}