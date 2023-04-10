#include<stdio.h>
typedef struct aStudent{
	char A;
	int B;
}Student;


int main(){
 int a[55]={0},b[55]={0},c[55]={0};
 int amax=0,amin=100,bmax=0,bmin=100,cmax=0,cmin=100;
 int n=0,i=0;
 int an=0,bn=0,cn=0;
 int aver,bver,cver;
 char clas;
 double asum=0,bsum=0,csum=0;
 scanf("%d\n",&n);
 for(i=0;i<2*n;i++){
  scanf("%c",&clas);
  if('A'==clas){
   an+=1;
   scanf("%d",&a[an]);
   asum+=a[an];
   if(amin>=a[an]){
    amin=a[an];
   }
   if(amax<=a[an]){
    amax=a[an];
   }
  }
  
  if('B'==clas){
   bn+=1;
   scanf("%d",&b[bn]);
   bsum+=b[bn];
   if(bmin>=b[bn]){
    bmin=b[bn];
   }
   if(bmax<=b[bn]){
    bmax=b[bn];
   }
  }
  
  if('C'==clas){
   cn+=1;
   scanf("%d",&c[cn]);
   csum+=c[cn];
   if(cmin>=c[cn]){
    cmin=c[cn];
   }
   if(cmax<=c[cn]){
    cmax=c[cn];
   }
  }
 }
 aver=asum/an;
 bver=bsum/bn;
 cver=csum/cn;
 
 if(aver>bver&&aver>cver){printf("A\n");}
 if(bver>aver&&bver>cver){printf("B\n");}
 if(cver>bver&&cver>aver){printf("C\n");}
 printf("%d %d\n",amax,amin);
 printf("%d %d\n",bmax,bmin);
 printf("%d %d\n",cmax,cmin);
 return 0;
}
