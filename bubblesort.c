#include<stdio.h>
void main()
{
	int temp,i,j,l, a[6]={50,25,30,30,5,10};
	l = sizeof(a)/sizeof(int);
	for(i=0;i<l;i++)
	{
		printf("%d ",a[i]);
                //printf("\n");
	}
	printf("\n");
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		

		}
	}
        
	for(i=0;i<l;i++)
	{
	printf("%d ",a[i]);
 	}
}
