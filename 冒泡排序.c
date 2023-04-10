#include<stdio.h>
void bubbleSort(int a[], int n)
{
	int i, j, hold;
	for(i=0; i<n-1; i++)
	{
		for (j=0; j<n-1-i; j++)
		{
			if (a[j]>a[j + 1])
			{
				hold=a[j];
				a[j]=a[j + 1];
				a[j+1]=hold;
			}
		}

	}
}

void bubbleSortPLUS(int a[],int n)
{
	int hold,flag;
	for(int i=1; i<=n-1; i++)
	{
		flag=0;
		for(int j=1; j<=n-1-i; j++)
		{
			if(a[j]>a[j + 1])
			{
				hold=a[j];
				a[j]=a[j + 1];
				a[j+1]=hold;
				flag=1;
			}
		}
		if(flag==0) break;
	}
}
