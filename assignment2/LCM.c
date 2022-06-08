// lcm of two numbers 
#include<stdio.h>
int main ()
{
	int num1,num2,large,i;
	printf("enter two numbers \n");
	scanf("%d%d",&num1,&num2);
	if (num1==num2){
	printf("LCM is =%d",num1);
	}
	else{
	for (i=num1>num2?num1:num2;i<=num1*num2;i++){
		if(i%num1==0&i%num2==0){
			printf("LCM is =%d",i);
			break;}
		}
	}

	return 0;	

}
