//write a c program to swap between two numbers
#include<stdio.h>
int main()
int a,b,temp;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the value of a after swapping will be:%d\n",a);
printf("the value of b after swapping will be:%d\n",b);
return 0;


