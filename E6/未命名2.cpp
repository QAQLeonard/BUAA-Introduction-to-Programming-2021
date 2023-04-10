#include<stdio.h>
int main()
{
    int a[5]={0,1,2,3,4}; 
    int* p=&a[1];
    int b;
    b=*p++;
    
    printf("%d",b);
    
    return 0;
}
