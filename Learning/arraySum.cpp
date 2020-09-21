#include<stdio.h>

int main(){
	int num[10]={1,2,3,4,5};
	int i,sum=0;
	
	for(i=0;i<10;i++){
		sum+=num[i];
	}
	printf("%d\n",sum);
	
	return 0;
}
