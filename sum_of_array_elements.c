#include<stdio.h>
int main()
{
	int array[50],n;
	int i,sum=0;
	int*ptr;
    printf("enter no of array elements :\n");
    scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    ptr = array;
    for(i=0;i<n;i++)
    {
    	sum = sum +*ptr;
    	ptr++;
    }
    printf("the sum = %d\n",sum);
}