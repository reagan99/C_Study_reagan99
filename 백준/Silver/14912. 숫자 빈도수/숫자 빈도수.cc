#include <stdio.h>
int main(void)
{
	int M, N, cnt = 0;
	scanf("%d%d", &M, &N);
	for(int i = 1; i < M + 1; i++)
	{
		int c = i;
		while(c)
		{
		 		if(c % 10 == N)
		 		{
		 			cnt += 1;
				}
				c /= 10; 
		}
	}
	printf("%d", cnt);
	return 0;
}