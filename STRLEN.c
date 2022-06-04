// string length without using library function and w/o spacing
/*#include<stdio.h>
int main()
{
	char string[20],length,i=0;
	printf("enter the string");
	scanf("%s",string);
	while (string[i]!='\0')
		{
			i++;
		}
	printf("length of the string is =%d",i);
	return 0;
}
*/
// when there is space in the word how to find the length
#include<stdio.h>
int main ()
{
	char string[20],length,i=0;
	printf("enter the string\n");
	fgets(string,20,stdin);
	while (string[i]!='\0')
		{
			i++;
		}
	printf("length of the string is =%d",i-2);
	return 0;
}
