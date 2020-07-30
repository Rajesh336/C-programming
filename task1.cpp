#include<stdio.h>
int main()
{
	int num1,num2,sum=0,dif=0,mul=0,div=0,mod=0;
	printf("Enter the first number \n");
	scanf("%d",&num1);
	printf("Enter the Second Number \n");
	scanf("%d",&num2);
	sum=num1+num2;
	dif=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	printf("\n sum of %d and %d is %d",num1,num2,sum);
	printf("\n difference of %d and %d is %d",num1,num2,dif);
	printf("\n Multipication of %d and %d is %d",num1,num2,mul);
	printf("\n Division of %d and %d is %d",num1,num2,div);
	printf("\n Modulus of %d and %d is %d",num1,num2,mod);
}
