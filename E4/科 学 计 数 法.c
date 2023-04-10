#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>



int main()
{
	char number[1000];
	int length,true_length,dot_position,f_int_num_position,f_dec_num_position;
	bool check_dot=false,check_int0=true,check_dec0=true;
	scanf("%s",number);
	length=strlen(number);
	
	for(int i=0;i<length;i++)//检查为浮点数还是整数 
	{
		if(number[i]=='.')
		{
			dot_position=i;
			check_dot=true;
			break;
		}
	}

	if(check_dot)// 对于浮点数 
	{
		
		for(int i=length;i>dot_position;i--)// 去除无用的小数部分和无用的dot,同时检查小数部分是否为0 
		{
			if(number[i]!='0')
			{
				true_length=i;
				check_dec0=false;
				break;
			}
			if(i==dot_position+1)
			{
				true_length=dot_position-1;
				break;
			}
		}
		
		for(int i=0;i<dot_position-1;i++)// 检查整数部分是否为0 
		{
			if(number[i]!='0')
			{
				check_int0=false;
			}
		}
		
		
		if(check_dec0&&check_int0)//=0
		{
			printf("0");
			return 0;
		}
		
		else if((!check_dec0)&&check_int0)//dec!=0;int=0
		{
			for(int i=dot_position+1;i<=true_length;i++)
			{
				if(number[i]!='0')
				{
					f_dec_num_position=i;
					break;
				}
			}
			printf("%c.",number[f_dec_num_position]);
			for(int i=f_dec_num_position+1;i<=true_length;i++)
			{
				printf("%cE%d",number[i],true_length-f_dec_num_position);
			}
		}
		
		else if(check_dec0&&(!check_int0))
		{
			
		}
		
		
		
		
	}
	
	
	
	
	
	
	return 0;
}
