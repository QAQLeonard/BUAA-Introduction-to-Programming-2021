#include<stdio.h>

long int lower_bound(long int b[], long int key, long int low, long int high)
{
long int mid;
if( low > high )  return -1;

mid = (low + high)/2;  
if( key == b[mid] &&b[mid-1] < key)
return mid;
else if( key > b[mid])
return lower_bound(b, key, mid+1, high);
else if(key < b[mid])
{
	if(b[mid-1]<key)return mid;
	else return lower_bound(b, key, low, mid-1);
}
}



long int upper_bound(long int b[], long int key, long int low, long int high)
{
long int mid;
if( low > high )  return -1;

mid = (low + high)/2;  
if( key < b[mid] &&b[mid-1] < key)
return mid;
else if( key > b[mid])
return upper_bound(b, key, mid+1, high);
else if(key < b[mid]&&b[mid-1] >= key) 
return upper_bound(b, key, low, mid-1);

}

int main()
{
	long int n,m;
	scanf("%ld %ld",&n,&m);
	long int a[n],e[m];
	for(int i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%ld",&e[i]);
	}
	
	for(int i=0;i<m;i++)
	{
		printf("%ld %ld\n",lower_bound(a,e[i],0,n-1),upper_bound(a,0,n-1,e[i]));
	}
	return 0;
}
