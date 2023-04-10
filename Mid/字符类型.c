#include<stdio.h>


int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>96&&ch<123){printf("Lowercase letter QAQ..");}
	else if(ch>64&&ch<91){printf("Capital! \\^ ^/");}
	else if(ch>47&&ch<58){printf("! Number !");}
	else{printf("I can't read.");}
	
	
	
	return 0;
}
