#include<stdio.h>

typedef struct aStudent{
	
	long int code;
	float score;
	
}Student;


void bubbleSort(Student a[], int n)
{
int i, j, flag;
Student hold;  
for( i = 0; i < n-1; i++)
{
    flag = 0;
    for(j = 0; j < n-1-i; j++)
	{
        if(a[j].score > a[j+1].score)
        {
	        hold = a[j];  a[j] = a[j+1];  a[j+1] = hold;  flag = 1;
        }
        if(a[j].score == a[j+1].score)
        {
	        if(a[j].code>a[j+1].code)
	    {
	    
		hold = a[j];  a[j] = a[j+1];  a[j+1] = hold;  flag = 1;
	}
    }
    }
if (flag == 0)
break;
}
}

int main()
{
	int n;
	scanf("%d",&n);
	Student student[n];
	for(int i=0;i<n;i++)
	{
		scanf("%ld %f",&student[i].code,&student[i].score);
	}
	for(int i=0;i<)
	//printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%08ld %.2f\n",student[i].code,student[i].score);
	}
	
	return 0;
}




