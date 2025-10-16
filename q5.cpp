#include<stdio.h>
int main(){
    int a[5];
    printf("enter array elements\n");
    for(int i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<5;i++){
        printf("%13d\n",a[i]);
    }
    int max=a[0];
    for(int i=0;i<5;i++){
    	if(a[i]>max){
    		max=a[i];
		}
	}
	int min=a[0];
	for(int i=0;i<5;i++){
    	if(a[i]<min){
    		min=a[i];
		}
	}
	 int result=0;
	 result=max-min;
	
	printf(" max element =%d\n",max);
	printf(" min element =%d\n",min);
	printf(" result =%d\n",result);
	return 0;
}
