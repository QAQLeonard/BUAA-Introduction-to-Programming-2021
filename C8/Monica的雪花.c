#include<stdio.h>

int isPrime(int primes[], int n)
{
	int i;
	for(i=0; primes[i]*primes[i] <= n; i++)
	{
		if (n % primes[i] == 0)
		return 0;
	}
	
	return 1;
}





int primes[10000000];


int main()
{
	int l;
	scanf("%d",&l);
	
	if(l==1&&l==0){printf("0");return 0;}
	else if(l>=2&&l<5){printf("1");return 0;}
	else if(l>=5&&l<10){printf("2");return 0;}
	
	
	int sum=10;
	
	int count=3, num, step;
	primes[0] = 2; 
	primes[1] = 3; 
	primes[2] = 5; //ͷ3������
	num = 7; step = 2; //��ʼΪ2
	while(sum<=l)
	{
		step = 6 - step; // ���� 4-2-4-2-...���У����ٱ���
		if (isPrime(primes, num))  {primes[count++] = num;sum+=num;printf("%d\n",num);}
		num += step; // ��һ�����ܵ�����
		
	}
	
	printf("%d",count-1);
	
	return 0;
}
