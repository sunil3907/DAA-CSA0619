#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	printf("enter string:");
	scanf("%s",str);
	printf("reversed string is %s",strrev(str));
	return 0;
}
