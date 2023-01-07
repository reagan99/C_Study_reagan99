#include <stdio.h>


int main() {
	int vle[10]={0};
	int cnt;
	int money;
	int ans=0;
	scanf("%d %d",&cnt ,&money);
	
	for(int i=0;i<cnt;i++){
		scanf("%d",&vle[i]);
	}
	
	for(int i=cnt-1;i>-1;i--){
		if(money>=vle[i]){
			ans+=money/vle[i];
			money%=vle[i];
		} 
		
	}
	
	printf("%d",ans);

	
	return 0;
}