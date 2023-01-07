#include <stdio.h>

int main(int argc, char** argv) {
	int chess[6]={1,1,2,2,2,8};
	int ans[6]={0};
	for(int i=0;i<6;i++){
		scanf("%d",&ans[i]);
	}
	
	for(int i=0;i<6;i++){
		printf("%d ",chess[i]-ans[i]);
	}

	return 0;
}