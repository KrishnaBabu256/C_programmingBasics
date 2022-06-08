// lcm of five numbers 
#include<stdio.h>
int main ()
{
	int num[5],large,prod=1,i,j,count=0;
	printf("enter five numbers \n");
	// scan the numbers
	for (i=0;i<5;i++)
	{	
		scanf("%d",&num[i]);
	}
	large =num[0];
	// find the latgest number
	for (i=0;i<5;i++)
	{
		if(num[i]>large)	
			large = num[i];
	}
	printf("large is = %d\n",large);
	// find the product of numbers
	for(i=0;i<5;i++)
	{
		prod=prod*num[i];
	}
	printf("product  is = %d\n",prod);
	// checking divisibility of all numbers
	for (i=large;i<=prod;i+=large)
	{
		for(j=0;j<5;j++)
		{	
			if (i%num[j]==0)
				count++;
			else 
			{	
				count=0;
				break;
			}
		}	
			if (count == 5)
				break;
	}
	
	printf("LCM is =%d\n",i);

	return 0;	

}
