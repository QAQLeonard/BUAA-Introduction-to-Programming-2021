
#include<stdio.h>
int a,*tmp=&a;

void gcd(int a,int b,int *d,int *x,int *y)
{
    if(b==0)
	{
		*d=a;
		*x=1;
		*y=0;
	}
    
    else
    {
		gcd(b,a%b,d,x,y);
		*tmp=*x;
		*x=*y;
		*y=*tmp-(a/b)**y;
		
		
	}
}

int main()
{
    int a=0,b=0,d,x,y;
    scanf("%d %d",&a,&b);
    gcd(a,b,&d,&x,&y);
    printf("%d = %d*(%d) + %d*(%d)",d,a,x,b,y);
    
    
    return 0;
}
