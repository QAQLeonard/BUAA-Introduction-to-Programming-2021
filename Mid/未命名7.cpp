#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
	
	char S[1000],S0[1000];
	gets(S);
	gets(S0);
	int length1=strlen(S),length2=strlen(S0),ans;
	for(int i=0;i<length2-length1;i++)
	{
		int times=0;
		
		for(int j=i;j<i+length1;j++)
		{
		    if(S[j-i]!=S0[j])
		    {
		        times++;
		    }
		}
		  
		if(times<=3)
		{
		    ans++;
		}
		
		
		
	}
	
	
}

