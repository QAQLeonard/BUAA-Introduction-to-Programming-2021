#include<stdio.h>
#include<string.h>

typedef struct AStudent{
	char ch[100];
	int score;
}Student;

void bubbleSort(Student a[], int n)
{
int i, j,m=0;
Student hold;  
for( i = 0; i < n-1; i++)
{

    for(j = 0; j < n-1-i; j++)
	{
        if(a[j].score < a[j+1].score)
        {
	        hold = a[j];  a[j] = a[j+1];  a[j+1] = hold;
        }
        
		if(a[j].score == a[j+1].score)
		{
			while(a[j].ch[m]<=a[j+1].ch[m])
			{
				m++;
				if(a[j].ch[m]>a[j+1].ch[m])
				{
					hold = a[j];  a[j] = a[j+1];  a[j+1] = hold;
				}
			}
			
    	}
    }


}
}



int main()
{
	int n;
	scanf("%d",&n);
	Student student[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s%d",student[i].ch,&student[i].score);	
	}
	
	bubbleSort(student,n);
	
	for(int i=0;i<n;i++)
	{
		printf("%s %d\n",student[i].ch,student[i].score);
	}
	
	
	return 0;
}
