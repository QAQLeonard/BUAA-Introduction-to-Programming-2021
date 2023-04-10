# include <stdio.h>  
long long int gcd(long long int num1,long long int num2)
{
	long long int temp,x,y;
	if(num1 < num2)  
	    {  
	        temp = num1;  
	        num1 = num2;  
	        num2 = temp;  
	    }  
	    x = num1;  
	    y = num2;  
	    while(y != 0)  
	    {  
	        temp = x%y;  
	        x = y;  
	        y = temp;  
	    }
		return x;  
}  

int  main(void)  
{  
    long long int a,b;
	int n;  
    scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld", &a, &b);  
		printf("%lld\n", a*b/gcd(a,b));
	}   
      
      
    return 0;  
}  
