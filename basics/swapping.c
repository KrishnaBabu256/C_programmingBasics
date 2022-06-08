// swapping two numbers without using third variable
#include<stdio.h>
int main ()
{
	int num1,num2;
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	printf("num1= %d\n",num1);
	printf("num2= %d\n",num2);
	printf("after swap\n");
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("num1= %d\n",num1);
	printf("num2= %d\n",num2);
	return 0;
}
	
