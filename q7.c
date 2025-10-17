#include<stdio.h>
int main(){
	int arr[10];
	int i,j,num;
	printf("Enter 10 integers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&num);
	j=0;
	while(j<i&&arr[j]!=num){
		j++;
	}
		if(j<i){
			arr[i]=-1;
		}
		else{
			arr[i]=num;
		}
	}
	printf("\n Updated array \n");
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}

	
	printf("\n");
	return 0;
}