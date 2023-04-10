#include <stdio.h>

int num[10007];

int main() 
{
 int n, i, x;
 scanf("%d", &n);
 for (i = 0; i < n; i++) {
  scanf("%d", &x);
  num[x]++;
 }
 for (i = 0; i < 10007; i++) {
  if (num[i] != 0)
   printf("%d:%d\n", i, num[i]);
 }
 return 0;
}
