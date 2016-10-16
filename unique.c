#include<stdio.h>
int main(void)
{
	int a[50];
	int i,k,num,count=0;
	printf("Enter the size of array");
	scanf("%d",&num);
	printf("enter the elements");
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<num;i++)
	{
	    for(k=0;k<num;k++)
			{
				if(a[i]!=a[k] && k!=i)
				{
				    count++;
				    if(count==num-1)
				    {
				        printf("%d",a[i]);
				    }
				}
				else
					
				    continue;
				
			}

		count=0;
	}
	
}