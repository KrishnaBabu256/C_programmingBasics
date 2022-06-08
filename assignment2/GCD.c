// gcd of two numbers 
#include<stdio.h>
int main ()
{
	int num1,num2,i,small;
	printf("enter two numbers \n");
	scanf("%d %d",&num1,&num2);
	if (num1==num2)
	{
		printf("GCD is =%d",num1);
	}
	small=num1<num2?num1:num2;
		for (i=small;i>0;i--)
	{
			if(num1%i==0 && num2%i==0)
		{
				printf("GCD is =%d",i);
				break;
		}
	}

	return 0;	
}
