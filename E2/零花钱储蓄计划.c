#include<stdio.h>
int main()
{
	int n,i,month_money=0,rest_money=0,mom_money=0,rnmd=1;
	scanf("%d\n",&n);
	int budget[n*12];
	for(i=0;i<n*12;i++)
	{
		scanf("%d",&budget[i]);
	} 
	
		
	for(i=0;i<n*12;i++)
	{
	    
		
	    	
	    month_money+=rest_money+300;
	    
		if(month_money>=budget[i])
	    {
		    rest_money=(month_money-budget[i])%100;
		    mom_money+=month_money-budget[i]-rest_money;
		    month_money=0;
	    }
	    
	    else if(month_money<budget[i])//month_money is not enough
	    {
		    printf("-%d",i+1);
		    rnmd=0;
		    break;
	    }
		
		if((i+1)%12==0)//the end of a year
		{
			month_money=mom_money+mom_money*2/10;
			mom_money=0;
		}
	
		
		
	} 
	if(rnmd!=0)
	{
		printf("%d",rest_money+mom_money+month_money);
		
	}
	return 0;
}
