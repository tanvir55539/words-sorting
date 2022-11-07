#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{	
	int n;
	printf("How many words do you want to enter: ");
	scanf("%d",&n);
	char *a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		a[i]=(char *) malloc(12*sizeof(char));
		scanf(" %[^\n]", a[i]);
	}
	
	int j;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
		
}
