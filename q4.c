#include<stdio.h>
int main(){
	char arr[100];
//	 int alpha[100];
	int i=0;
	printf("enter string\n");
	scanf("%[^\n]",arr);
	//printf("%s\n",arr);
//	while(arr[i]!='\0'){
	//	alpha[i]=(int)arr[i];
	//	printf("%4d",alpha[i]);
	//	i++;
//	}
	while(arr[i]!='\0'){
		if(arr[i]>='A'&& arr[i]<='Z'){
			arr[i]=arr[i] +32;
		}
		else if(arr[i]>='a'&& arr[i]<='z'){
			arr[i]=arr[i]-32;
		}
		i++;
	}
	printf(" %s\n",arr);
	return 0;
	
	
}
