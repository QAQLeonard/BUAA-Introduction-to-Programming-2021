#include <stdio.h>
#include <string.h>
char  ch[1000][1000];


int main() {
 int n, m, i, x, y;
 char p[150];
 scanf("%d %d ", &n, &m);
 for (i = 0; i < n; i++) {
  gets(ch[i]);
 }
 for (i = 0; i < m; i++) {
  scanf("%d%d", &x, &y);
  strcpy(p, ch[x - 1]);
  strcpy(ch[x-1], ch[y - 1]);
  strcpy(ch[y-1], p);
  
  
 }
 for (i = 0; i < n; i++) {
  printf("%s\n", ch[i]);
 }
}
