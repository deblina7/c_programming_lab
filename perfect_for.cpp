//w.a.p to check if a number is perfect or not using for loop
#include<stdio.h>
int main(){
	int n, i=1,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("Perfect Number");
	}
	else{
		printf("Not a perfect number");
	}
	return 0;
}
