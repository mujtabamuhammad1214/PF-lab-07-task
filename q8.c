#include<stdio.h>
int main(){
	char str[100];
	printf("enter a string:\n");
	scanf("%[^A-Za-z]",str);
	printf(" %s",str);
}