#include <stdio.h>

int cal[300]={0};

int main(int argc, char** argv) {
	int num;
	long long int cal[3000]={0};
	int cnt=0;
	scanf("%d",&num);
	
	for(int i=0;i<num;i++){
		scanf("%d",&cal[i]);
	
	}
	
	for(int i=0;i<num;i++){
		
		if(cal[i]%2==1) printf("Gazua");
		else if((cal[i] & (cal[i] - 1))==0) printf("GoHanGang");
		else printf("Gazua");
		
	
		printf("\n");
	}
	return 0;
}