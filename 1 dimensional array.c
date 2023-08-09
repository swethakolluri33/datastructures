#include<stdio.h>
int main()
{
	int i,a[6];
	for(i=0;i<6;i++)
	{
		printf("enter a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n elements of array: \n");
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
