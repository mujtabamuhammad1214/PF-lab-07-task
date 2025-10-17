#include<stdio.h>
int main(){
	int a[10];
	int i,num,count=0;
	printf("Enter the array elements\n:");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
		for(i=0;i<10;i++){
		printf("%3d",a[i]);
	}
	printf("\nEnter searching number\n:");
	scanf("%d",&num);
		for(i=0;i<10;i++){
	    if(a[i]==num){
	    	count++;
		}
	}
	if(count>0){
		printf("the number occurs = %d",count);
	}
		else{
		printf(" not in array");
	}
	return 0;
	
	
	
}