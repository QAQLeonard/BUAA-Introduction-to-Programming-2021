#include<stdio.h>
#include<math.h>
#include<string.h>
void f(long long n){
 if(n==1){
  printf("2(0)");
  return;
 }
 if(n==2){
  printf("2(2(0))");
  return;
 }
 if(n==3){
  printf("2(2(0))+2(0)");
  return;
 }
 long long sum=1;
 long long cnt=0;
 while(sum<=n){
  sum*=2;
  cnt++;
 }
 cnt-=1;
 if(n==sum/2){
  printf("2(");
  f(cnt);
  printf(")");
 }
 else{
  if(sum/2!=2){
  printf("2(");
  f(cnt);
  printf(")+");
  f(n-sum/2);
  }else{
   printf("2(2(0))");
   printf("+");
   f(n-sum/2);
  }
 }
}
int main(){
 long long n;
 scanf("%lld",&n);
 if(n==0) printf("0");
 else f(n);
 return 0;
}
