#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int t;
	long long n;
	int check5 = 0;
	long long k;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%lld", &n);

		for (long long j = 5; j <= n; j*=5) {
			check5 += n / j;
		}
		printf("%d\n", check5);
		check5 = 0;
	}
	return 0;
}