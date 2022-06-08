// gcd of five numbers 
#include<stdio.h>
int main ()
{
	int num[5],small,i,j,count=0;
	printf("enter five numbers \n");
	// scan the numbers
	for (i=0;i<5;i++)
	{	
		scanf("%d",&num[i]);
	}
	small = num[0];
	// finding the small number among 5
	for (i=0;i<5;i++)
	{
		if(small>num[i])
			small =num[i];
	}
	printf("small is =%d\n",small);
	// logic checking the divisibility
	for (j=2 ;j<=small;j++)
	{
		for(i=0;i<5;i++)
		{
			
			if(num[i]%j ==0)
				count++;
			else
			{	
				count=0;
				break;
			}
		}
		if(count ==5)
			break;
	}
	if (count ==5)
		printf(" GCD IS =%d\n",j);
	else
		printf("GCD IS = 1\n");
	return 0;
}
