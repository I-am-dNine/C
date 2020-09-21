#include<stdio.h>

int main(){
	int num[5]={1,2,10,4,5};
	int max=0,i;
	
	for(i=0;i<5;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	printf("%d",max);
	return 0;
}
