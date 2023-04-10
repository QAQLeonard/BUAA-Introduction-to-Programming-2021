#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

#include<stdlib.h>
void written_amount(int num,char *buffer);
void written_three(int num,char *buffer); 
void written_two(int a,char *buffer);




int main()
{
	bool front_space=false,number=false;
	char ch[1000];
	char *buffer;
	buffer=malloc(sizeof(char *)*200) ;
	int length,numlen=0,begin_code;
	long long num=0;
	while(gets(ch)!=NULL)
	{
		length=strlen(ch);
		for(int i=0;i<length;i++)
		{
			
			
			if(i==0){front_space=true;}
			else if(ch[i-1]==' '){front_space=true;}
			else{front_space=false;}
			
			
			if(ch[i]>47&&ch[i]<58&&front_space&&!number)//判断第一个数字 
			{
				number=true;
				numlen++;
				begin_code=i;
			}
			
			else if(ch[i]>47&&ch[i]<58&&number&&!(ch[i+1]==' '||i==length-1))//判断数字中 
			{
				numlen++;
			}
			
			else if(ch[i]>47&&ch[i]<58&&(ch[i+1]==' '||i==length-1)&&number)//判断最后一位数字
			{
				number=false;
				numlen++; 
				for(int j=0;j<numlen;j++)
				{
					num+=(ch[j+begin_code]-48)*pow(10,numlen-j-1);
				}
				
				written_amount(num,buffer);
				num=0;
				front_space=false;
				numlen=0;
			}
			
			else{printf("%c",ch[i]);} 
		}
	}
	
	return 0;
}


void written_amount(int num,char *buffer)
{
    //三个字符串指针，接受num1，num2，num3

    char *buffer1=NULL,*buffer2=NULL,*buffer3=NULL;
    buffer1=malloc(sizeof(char*)*40);
    buffer2=malloc(sizeof(char*)*40);
    buffer3=malloc(sizeof(char*)*40);
    int count=1;
    int x=num/10;
    while(x!=0){
        count++;
        x=x/10;
    }
//    printf("%d\n",count);
    int num1=0,num2=0,num3=0;
    //把num每三位一下分割给num1,num2,num3
    if(count>=1 && count<=3){
        num1=num;
    }
    else if(count>3 && count<=6){
        num1=num%1000;
        num2=num/1000;
    }
    else{
        num1=num%1000;
        num2=(num/1000)%1000;
        num3=num/1000000;
    }
//??written_three????,????????????????
    written_three(num1,buffer1);

    written_three(num2,buffer2);

    written_three(num3,buffer3);
//?buffer1?2?3??copy?buffer,???????
    if(!strcmp(buffer3,"zero")) {

        if(!strcmp(buffer2,"zero")){

            strcpy(buffer,buffer1);

        }
        else{
            strcpy(buffer,buffer2);
            strcat(buffer," thousand ");
            strcat(buffer,buffer1);
        }
    }
    else{
        strcpy(buffer,buffer3);
        strcat(buffer," million ");
        strcat(buffer,buffer2);
        strcat(buffer," thousand ");
        strcat(buffer,buffer1);
    }
    //?????buffer1?buffer2?buffer3????copy?buffer
}

void written_three(int num,char *buffer)
{
    int n=num%100;
    char *p;
    p=malloc(sizeof(char *)*40);
//    printf("%d\n",n);
    //??num???0,???????buffer=NULL,????????,?????????
    if(num/100==0){
        written_two(num,buffer);
//        printf("%s\n",buffer);
    }
    else {
        switch(num/100){
            case 1:        strcpy(buffer,"one hundred ");        break;
            case 2:        strcpy(buffer,"two hundred ");        break;
            case 3:        strcpy(buffer,"three hundred ");    break;
            case 4:        strcpy(buffer,"four hundred ");        break;
            case 5:        strcpy(buffer,"five hundred ");        break;
            case 6:        strcpy(buffer,"six hundred ");        break;
            case 7:        strcpy(buffer,"seven hundred ");    break;
            case 8:        strcpy(buffer,"eight hundred ");    break;
            case 9:        strcpy(buffer,"nine hundred ");        break;
        }
        written_two(n,p);
//        printf("%s\n",p);
        strcat(buffer,p);
//        printf("%s\n",buffer);
    }
}

void written_two(int a,char *buffer)
{

    int count=1;
    int x=a/10;
    while(x!=0){
        count++;
        x=x/10;
    }
    switch(count){
        case 1:{
            switch(a){
                case 0:        strcpy(buffer,"zero");  break;
                case 1:        strcpy(buffer,"one");    break;
                case 2:        strcpy(buffer,"two");    break;
                case 3:        strcpy(buffer,"three");    break;
                case 4:        strcpy(buffer,"four");    break;
                case 5:        strcpy(buffer,"five");    break;
                case 6:        strcpy(buffer,"six");    break;
                case 7:        strcpy(buffer,"seven");    break;
                case 8:        strcpy(buffer,"eight");    break;
                case 9:        strcpy(buffer,"nine");    break;
            }
        }break;
        case 2:{
            if(a%10==0){
                switch(a/10){
                    case 1:        strcpy(buffer,"ten");        break;
                    case 2:        strcpy(buffer,"twenty");    break;
                    case 3:        strcpy(buffer,"thirty");    break;
                    case 4:        strcpy(buffer,"fourty");    break;
                    case 5:        strcpy(buffer,"fifty");        break;
                    case 6:        strcpy(buffer,"sixty");        break;
                    case 7:        strcpy(buffer,"seventy");    break;
                    case 8:        strcpy(buffer,"eighty");    break;
                    case 9:        strcpy(buffer,"ninety");    break;
                }
            }
            else if(a/10==1){
                switch(a%10){
                    case 1:        strcpy(buffer,"eleven");    break;
                    case 2:        strcpy(buffer,"twelve");    break;
                    case 3:        strcpy(buffer,"thirteen");    break;
                    case 4:        strcpy(buffer,"fourteen");    break;
                    case 5:        strcpy(buffer,"fifteen");    break;
                    case 6:        strcpy(buffer,"sixteen");    break;
                    case 7:        strcpy(buffer,"seventeen");    break;
                    case 8:        strcpy(buffer,"eighteen");    break;
                    case 9:        strcpy(buffer,"nineteen");    break;
                }
            }
            else {
                switch(a/10){
                    case 2:{
                        switch(a%10){
                            case 1:strcpy(buffer,"twenty one");            break;
                            case 2:strcpy(buffer,"twenty two");            break;
                            case 3:strcpy(buffer,"twenty three");        break;
                            case 4:strcpy(buffer,"twenty four");        break;
                            case 5:strcpy(buffer,"twenty five");        break;
                            case 6:strcpy(buffer,"twenty six");            break;
                            case 7:strcpy(buffer,"twenty seven");        break;
                            case 8:strcpy(buffer,"twenty eight");        break;
                            case 9:strcpy(buffer,"twenty nine");        break;
                        }
                    }break;
                    case 3:{
                        switch(a%10){
                            case 1:strcpy(buffer,"thirty one");            break;
                            case 2:strcpy(buffer,"thirty two");            break;
                            case 3:strcpy(buffer,"thirty three");        break;
                            case 4:strcpy(buffer,"thirty four");        break;
                            case 5:strcpy(buffer,"thirty five");        break;
                            case 6:strcpy(buffer,"thirty six");            break;
                            case 7:strcpy(buffer,"thirty seven");        break;
                            case 8:strcpy(buffer,"thirty eight");        break;
                            case 9:strcpy(buffer,"thirty nine");        break;
                        }
                    } break;
                    case 4:{
                        switch(a%10){
                            case 1:strcpy(buffer,"fourty one");            break;
                            case 2:strcpy(buffer,"fourty two");            break;
                            case 3:strcpy(buffer,"fourty three");        break;
                            case 4:strcpy(buffer,"fourty four");        break;
                            case 5:strcpy(buffer,"fourty five");        break;
                            case 6:strcpy(buffer,"fourty six");            break;
                            case 7:strcpy(buffer,"fourty seven");        break;
                            case 8:strcpy(buffer,"fourty eight");        break;
                            case 9:strcpy(buffer,"fourty nine");        break;
                        }
                    }break;
                    case 5:{
                        switch(a%10){
                            case 1:strcpy(buffer,"fifty one");            break;
                            case 2:strcpy(buffer,"fifty two");            break;
                            case 3:strcpy(buffer,"fifty three");        break;
                            case 4:strcpy(buffer,"fifty four");              break;
                            case 5:strcpy(buffer,"fifty five");            break;
                            case 6:strcpy(buffer,"fifty six");            break;
                            case 7:strcpy(buffer,"fifty seven");        break;
                            case 8:strcpy(buffer,"fifty eight");        break;
                            case 9:strcpy(buffer,"fifty nine");            break;
                        }
                    }break;
                    case 6:{
                        switch(a%10){
                            case 1:strcpy(buffer,"sixty one");            break;
                            case 2:strcpy(buffer,"sixty two");            break;
                            case 3:strcpy(buffer,"sixty three");        break;
                            case 4:strcpy(buffer,"sixty four");              break;
                            case 5:strcpy(buffer,"sixty five");            break;
                            case 6:strcpy(buffer,"sixty six");            break;
                            case 7:strcpy(buffer,"sixty seven");        break;
                            case 8:strcpy(buffer,"sixty eight");        break;
                            case 9:strcpy(buffer,"sixty nine");            break;
                        }
                    }break;
                    case 7:{
                        switch(a%10){
                            case 1:strcpy(buffer,"seventy one");        break;
                            case 2:strcpy(buffer,"seventy two");        break;
                            case 3:strcpy(buffer,"seventy three");        break;
                            case 4:strcpy(buffer,"seventy four");         break;
                            case 5:strcpy(buffer,"seventy five");        break;
                            case 6:strcpy(buffer,"seventy six");        break;
                            case 7:strcpy(buffer,"seventy seven");        break;
                            case 8:strcpy(buffer,"seventy eight");        break;
                            case 9:strcpy(buffer,"seventy nine");        break;
                        }
                    }break;
                    case 8:{
                        switch(a%10){
                            case 1:strcpy(buffer,"eighty one");            break;
                            case 2:strcpy(buffer,"eighty two");            break;
                            case 3:strcpy(buffer,"eighty three");        break;
                            case 4:strcpy(buffer,"eighty four");         break;
                            case 5:strcpy(buffer,"eighty five");        break;
                            case 6:strcpy(buffer,"eighty six");            break;
                            case 7:strcpy(buffer,"eighty seven");        break;
                            case 8:strcpy(buffer,"eighty eight");        break;
                            case 9:strcpy(buffer,"eighty nine");        break;
                        }
                    }break;
                    case 9:{
                        switch(a%10){
                            case 1:strcpy(buffer,"ninety one");            break;
                            case 2:strcpy(buffer,"ninety two");            break;
                            case 3:strcpy(buffer,"ninety three");        break;
                            case 4:strcpy(buffer,"ninety four");         break;
                            case 5:strcpy(buffer,"ninety five");        break;
                            case 6:strcpy(buffer,"ninety six");            break;
                            case 7:strcpy(buffer,"ninety seven");        break;
                            case 8:strcpy(buffer,"ninety eight");        break;
                            case 9:strcpy(buffer,"ninety nine");        break;
                        }
                    }break;
                }
            }
        }break;
        default:printf("ERROR!"); exit(EXIT_FAILURE);
    }
}













