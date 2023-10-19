#include<stdio.h>
int main(){
	int i,n;
	double arr[10];
	printf("enter the number of elements(1 to 10):");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter number %d:",i+1);
		scanf("%lf",&arr[i]);
	}
	for(int i=1;i<n;++i){
		if(arr[0]<arr[i]){
			arr[0]=arr[i];
		}
	}
	printf("largest element=%.2lf",arr[0]);
	return 0;
}
