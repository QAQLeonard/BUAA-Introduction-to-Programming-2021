#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    long long n; 
    long long num; 
    n=0;
    while (scanf("%lld", &n) != EOF) 
	{ 
	    num = 0;
		while (n > 0) 
	    { 
	        num += n / 5; 
			n = n / 5; 
	    } 
		
		printf("%lld\n", num);  
	} 


    return 0; 
}
