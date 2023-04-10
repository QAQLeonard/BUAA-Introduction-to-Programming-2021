#include<stdio.h>



int main()
{
    int n,boool;
    scanf("%d",&n);
    char line[1001];
    char ans = 127;
    for(int count=1;count<=n;count++)
    {

        int num;
        scanf("%s",line);
        //printf("%s",line);
        for(num=0;line[num]!='\0';num++);
        for(int i=1;i<=3;i++)
        {
            int step=i;
            while(step<num-2)
            {
                boool=0;
                for(int j=1;j<=3;j++)
                {
                    if(line[step-1]==line[step+j-1])
                    {
                        step+=j;
                        boool=1;
                        break;
                    }
                }
                if(boool==0)
				{
					break;
				}
            }
            if(step>=num-2)
            {
                if(ans>line[i-1])
				{
					ans=line[i-1];
				}
            }
        }
        if(ans==127)
		{
			printf("You loser!\n");
		}
        else 
		{
			printf("%c",ans);
		}
    }
    return 0;
}
