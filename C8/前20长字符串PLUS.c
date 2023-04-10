#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char ch[100007][1000];
int len[100007][2], sum[21];

void swap(int a[],int x,int y)
{
	int temp=a[x];
	a[x]=a[y];
	a[y]=temp;	
}

int max(int n) 
{
 	int i = 0, max = 0, max1;
 	
 	while (i < n) 
	{
  		if (len[i][1] == 0 && len[i][0] > max) 
		{
   			max = len[i][0], max1 = i;
		}
  		i++;
 	}
 	
 	len[max1][1] = 1;
 	
 	return max1;
}

void sortx1(int n) 
{
 	int i, j, flag = 0;
 	for (i = 0; i < n - 1; i++) 
	{
  		flag = 0;
  		for (j = 0; j < n - 1 - i; j++) 
		{
   			if (sum[j] > sum[j + 1])
    		{
				swap(sum,j,j+1);
				flag = 1;
    		}
    		
  		}
  		if (flag == 0)
   		break;
 	}


}

int main() {
 	for (int k = 0; k < 100001; k++) 
 	{
  		len[k][1] = 0;
 	}
 int i = 0;
 while (gets(ch[i]) != NULL) 
 {
  i++;
 }

 	for (int j = 0; j < i; j++) 
 
 	{
  		len[j][0] = strlen(ch[j]);
 	}
 	
	 
	 
	 for (int j = 0; j < 20; j++) 
 	{
  		sum[j] = max(i);
 	}
 	
	 
	sortx1(20);
 
 
 	for (int j = 0; j < 20; j++) 
 	{
 		printf("%s\n", ch[sum[j]]);
  		//printf("%d", sum[j]);
 	}
 	
 	
 	return 0;
 
}
