#include<stdio.h>
#include<string.h>
int shifou(char a[],int len,int t); //用于判断字符串可不可以跳的函数，r=0不可以r=-1可以 
int main(){
 int n=0;
 int len,i;
 char ch[1000];//装字符的 
 scanf("%d",&n);
 int t=0;
 int r1,r2,r3;
 r1=r2=r3=-1;
 while(n>0){
  n--;
  scanf("%s",ch); 
  len=strlen(ch);
  if(len==3){
    if(ch[0]>=ch[1]&&ch[1]<=ch[2]){
    printf("%c\n",ch[1]);
   }else if(ch[0]>ch[2]&&ch[2]<ch[1]){
    printf("%c\n",ch[2]);
   }else{
    printf("%c\n",ch[0]);
   }
  }else if(len==1){
   printf("%c",ch[0]);
  }else if(len==2){
   if(ch[0]>=ch[1])
   printf("%c",ch[i]);
   else
   printf("%c",ch[0]);
  }else{
     r1=shifou(ch,len,t);
     t=1;
     r2=shifou(ch,len,t);
     t=2;
     r3=shifou(ch,len,t);
     if(r1==0&&r2==0&&r3==0){//枚举输出1 
      printf("You loser!\n");
  }else if(r1==-1&&r2==-1&&r3==-1){
   if(ch[0]>=ch[1]&&ch[1]<=ch[2]){
    printf("%c\n",ch[1]);
   }else if(ch[0]>ch[2]&&ch[2]<ch[1]){
    printf("%c\n",ch[2]);
   }else{
    printf("%c\n",ch[0]);
   }
  }else if(r1==-1&&r2==0&&r3==0){
   printf("%c\n",ch[0]);
  }else if(r1==0&&r2==-1&&r3==0){
   printf("%c\n",ch[1]);
  }else if(r1==0&&r2==0&&r3==-1){
   printf("%c\n",ch[2]);
  }else if(r1==0&&r2==-1&&r3==-1){
   if(ch[1]>=ch[2]){
    printf("%c\n",ch[2]);
   }else{
    printf("%c\n",ch[1]);
   }
  }else if(r1==-1&&r2==0&&r3==-1){
    if(ch[0]>=ch[2]){
    printf("%c\n",ch[2]);
   }else{
    printf("%c\n",ch[0]);
   }
  }else{
    if(ch[1]>=ch[0]){
    printf("%c\n",ch[0]);
   }else{
    printf("%c\n",ch[1]);
   }
  }
 } 
}
 return 0;
} 

int rnmd(char a[],int len,int t)
{
 int i;
 int r=0;
  for(i=t+1;i<len;i++)
  {
      if(a[i]==a[t])
        {
            if((i-t)<=3)
	        {
                t=i;
                r=-1;
            }
   
        }
  }
if((len-t)>=4)
{
     r=0;
}
  return r;
}
