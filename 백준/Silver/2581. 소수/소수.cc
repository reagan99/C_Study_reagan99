#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>


int main()
{   
    int M, N;
    int arr[10001]= {0,};
    int min = 0;
    int sum = 0;
    scanf("%d %d", &M, &N);

    if (M == 1) M++;
    
    for (int i = M; i <= N; i++) {
       arr[i] = i;
       for (int j = 2; j<int(sqrt(i)+1); j++)

           if (i % j == 0 ) arr[i] = 0;
    }
    for (int k = M; k <= N; k++)
        if (arr[k] == 0) {

        }
        else{
            sum += arr[k];
            
        }
    
    for (int k = M; k <= N; k++)
        if (arr[k] == 0) {
        }
        else {
            min = arr[k];
            break;
        }
    if (min == 0 || N==1) printf("-1");

    else printf("%d\n%d", sum,min);


    return 0;
}