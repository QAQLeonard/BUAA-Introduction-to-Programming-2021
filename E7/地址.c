#include<stdio.h>
#include<string.h>
#include<math.h>



int my_atoi(char *p)
{
	int ans=0,len=0;
	
	while(!(*p>47&&*p<58))
	{
		p++;
	}
	char *temp=p;
	
	while(*temp>47&&*temp<58)
	{
		len++;
		temp++;
	}
	temp=p;
	while(*temp>47&&*temp<58)
	{
		ans+=(*temp-48)*pow(10,len-1);
		len--;
		temp++;	
	}
	return ans;
}

int main()
{
    int x,y;
    char temp[104];
    while(scanf("%s",temp)!=EOF)
    {
        int len = strlen(temp);
        if(temp[0]=='&')
        {
            if(len==2)
            {
                printf("0x00000000\n");
            }
            else if(temp[2]=='[')
            {
                if(temp[len-1]==']')
                {
                    x = my_atoi(temp + 3);
                    printf("0x%08x\n",4 * x);
                }
                else
                {
                    x = my_atoi(temp + 3);
                    y = my_atoi(strchr(temp,'+') + 1);
                    printf("0x%08x\n",4 * (x + y));
                }
            }
            else if(temp[2]=='+')
            {
                y = my_atoi(temp + 3);
                printf("0x%08x\n",400 * y);
            }
        }
        else
        {
            if(len==1)
            {
                printf("0x00000000\n");
            }
            else
            {
                y = my_atoi(temp + 2);
                printf("0x%08x\n",4 * y);
            }
        }
    }
    return 0;
}
