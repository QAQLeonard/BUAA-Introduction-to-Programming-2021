#include<stdio.h>
int a[12][12];
int main(){
 int n,i,j,cnt1=0,cnt2=0,k,flag=1,l;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  for(j=0;j<n;j++){
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<n;i++){
  for(j=0;j<=n-5;j++){
   flag=1;
   for(k=0;k<4;k++){
    if(a[i][j+k]!=a[i][j+k+1]){
     flag=0;
     break;
    }
   }
   if(flag==1&&a[i][j]==1) cnt1++;
   if(flag==1&&a[i][j]==2) cnt2++;
  }
 }
 flag=1;
 for(j=0;j<n;j++){
  for(i=0;i<=n-5;i++){
   flag=1;
   for(k=0;k<4;k++){
    if(a[i+k][j]!=a[i+k+1][j]){
     flag=0;
     break;
    }
   }
   if(flag==1&&a[i][j]==1) cnt1++;
   if(flag==1&&a[i][j]==2) cnt2++;
  }
 }
 flag=1;
 for(l=0;l<n-4;l++){
 for(i=l,j=0;i<n-4;i++,j++){
  flag=1;
  for(k=0;k<4;k++){
   if(a[i+k][j+k]!=a[i+k+1][j+k+1]){
    flag=0;
    break;
   }
  }
  if(flag==1&&a[i][j]==1) cnt1++;
  if(flag==1&&a[i][j]==2) cnt2++;
 }
 }
 flag=1;
 for(l=1;l<n-4;l++){
 for(i=0,j=l;j<n-4;i++,j++){
  flag=1;
  for(k=0;k<4;k++){
   if(a[i+k][j+k]!=a[i+k+1][j+k+1]){
    flag=0;
    break;
   }
  }
  if(flag==1&&a[i][j]==1) cnt1++;
  if(flag==1&&a[i][j]==2) cnt2++;
 }
 }
 flag=1;
 for(l=0;l<n-4;l++){
  for(i=0,j=n-l-1;j>3;i++,j--){
   flag=1;
   for(k=0;k<4;k++){
    if(a[i+k][j-k]!=a[i+k+1][j-k-1]){
     flag=0;
     break;
    }
   }
  if(flag==1&&a[i][j]==1) cnt1++;
  if(flag==1&&a[i][j]==2) cnt2++;
  }
 }
 flag=1;
 for(l=1;l<n-4;l++){
  for(i=l,j=n-1;i<n-4;i++,j--){
   flag=1;
   for(k=0;k<4;k++){
    if(a[i+k][j-k]!=a[i+k+1][j-k-1]){
     flag=0;
     break;
    }
   }
  if(flag==1&&a[i][j]==1) cnt1++;
  if(flag==1&&a[i][j]==2) cnt2++;
  }
 }
 printf("%d\n%d",cnt1,cnt2);
 return 0;
}
