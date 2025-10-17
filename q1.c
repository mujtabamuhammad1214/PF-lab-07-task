#include<stdio.h>
int main(){
	int a[5];
	int i,temp;
		printf("Enter the array elements\n:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	temp=a[4];
		for(i=4;i>0;i--){
			a[i]=a[i-1];
		}
	printf("\n");
	a[0]=temp;
	printf("array after right shift\n:");
		for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
	
}