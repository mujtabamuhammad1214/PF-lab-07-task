#include<stdio.h>
int main(){
	char str[100];
	int i=0,vowel=0,consonant=0;
	printf("enter string\n");
	scanf("%s", str);
	while(str[i]!='\0'){
		if(str[i]=='A'|| str[i]=='a'||str[i]=='E'|| str[i]=='e'||
		str[i]=='I'|| str[i]=='i'||str[i]=='O'|| str[i]=='0'||str[i]=='U'|| str[i]=='u'){
			vowel++;
		}
		else{
			consonant++;
		}
		i++;
    }
		printf("The number of Vowels =%d\n",vowel);
		printf("The number of consonants =%d\n",consonant);
		return 0;
	}