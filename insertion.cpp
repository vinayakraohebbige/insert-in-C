#include<stdio.h>
int main()
{
	int a[50],i,e,num,position;
	printf("enter a number ");
	scanf("%d",&e);
	if(e>50)
	{
		printf("enter less than 50");
	}
	else{
	
	printf("enter elements ");
	for(i=0;i<e;i++)
	scanf("%d",&a[i]);
	printf("enter the data to be inserted ");
	scanf("%d",&num);
	printf("enter pos ");
	scanf("%d",&position);
	if(position<=0 || position>e+1)
	{
		printf("not valid");
	}
	else
	{
	
	for(i=e-1;i>=position-1;i--)
	{
		a[i+1]=a[i];
	}
	a[position-1]=num;
	e++;
	for(i=0;i<e;i++)
	printf("%d \n",a[i]);
	return 0;
}
}
	
}
