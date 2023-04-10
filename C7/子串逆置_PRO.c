#include<stdio.h>  
#include<string.h>
void rev(char *, char *);  

int main()
{
	char str[BUFSIZ], substr[BUFSIZ],*p;  
	scanf("%s%s", str,substr);
    p=str;
		while(strstr(p, substr)!= NULL)  
		{
			char *temp=strstr(p, substr);
			rev(temp, temp + strlen(substr)-1);
			p=temp+1;
			
			
		}
	puts(str);
	
	
		
		
		
		
	
	return 0;
}


void rev(char* first, char* last)
{
	int tmp;  
	while(first < last)
	{
		tmp = *last;
		*last = *first;
		*first = tmp;
		first++, last--;
	}
}
