//W.a.p to check whether a number is prime or notusing for loop
#include<stdio.h>
int main(){
	int n,i=2;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			break;
		}
	}
	if(n<=1){
		printf("Not a prime number");
	}
	else if(i==n){
		printf("prime number");
	}
	else{
		printf("Not a prime");
	}
	return 0;
}
