#include<stdio.h>
int main(){
	int pass[10], fail[10];
	int i,passcount=0,failcount=0,marks=0;
	int pass_sum=0,fail_sum=0;
	float avg;
	printf("Enter Quiz marks for students (0-10).Enter -1 to terminate\n");
	for(i=0;i<10;i++){
		printf("Enter marks for student %d\n",i+1);
		scanf("%d",&marks);
		if(marks==-1){
			break;
		}
		else if(marks>=5 && marks<=10){
			pass[passcount]=marks;
			passcount++;
			pass_sum+=marks;
		}
			else if(marks>=0 && marks<5){
			fail[failcount]=marks;
			failcount++;
			fail_sum+=marks;
		}
		
	}
	printf("\n-----pass Marks-----\n");
	if(passcount>0){
	for(i=0;i<passcount;i++){
		printf("%3d",pass[i]);
	}
		printf("\nSum of pass marks=%d\n",pass_sum);
		avg=(float)pass_sum/passcount;
		printf("\n Average of pass marks=%.2f\n",avg);
	}
	else{
		printf("\n NO pass marks");
	}
		printf("\n-----fail Marks-----\n");
		if(failcount>0){
	for(i=0;i<failcount;i++){
		printf("%3d",fail[i]);
	}
      printf("\nSum of fail marks=%d\n",fail_sum);
		avg=(float)fail_sum/failcount;
		printf("\n Average of fail marks=%.2f\n",avg);
	}
	else{
		printf("\n NO Fail Marks");
	}
	return 0;
}