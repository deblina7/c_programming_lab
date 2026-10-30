//W.a.p to check whether a number is prime or not using while loop, then using for loop
#include<stdio.h>
int main(){
	int n,i=2;
	printf("enter any number:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			break;
			i++;
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
