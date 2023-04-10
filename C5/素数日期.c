/* 
 Author: Grub_49
 Result: AC	Submission_id: 3631996
 Created at: Thu Oct 21 2021 19:50:47 GMT+0800 (China Standard Time)
 Problem_id: 4727	Time: 39	Memory: 1704
*/

#include<stdio.h>
#include<stdbool.h>

int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};//ƽ��ÿ���µ�����
bool isday(int y)
{
    int d=y%100;y/=100;//��
    int m=y%100;y/=100;//��
    if(m<1 || m>12) return false;//�±�����1-12֮��
    else if(d==29&&m==2)//����2��29��
        return (y%100&&y%4==0)||y%400==0;//�Ϸ����ڵ���ݱ���Ϊ����
    return d>=1 && d<=day[m];//�յ�����
}
int qpow(int a,int b,int p)
{
    //��(a^b) mod p ��isprime�����л��õ�
    int ret=1;
    while(b)
    {
        if(b&1) ret=1ll*ret*a%p;
        a=1ll*a*a%p,b>>=1;
    }
    return ret;
}
bool isprime(int n)//����1��ʾnΪ������0��ʾn��������
{
    if(n==2||n==3) return true;
    if(!(n&1)) return false;
    int m=n-1,a,tmp,ans,cnt=0;
    while(!(m&1))
        m>>=1,cnt++;
    int rd=20011224,seed=998244353,seed2=20217371;
    for(int i=0;i<20;i++)
    {
        rd=rd*seed+seed2;
        if(rd<0) rd=-rd;
	a=rd%(n-1)+1;
        //��֤����С������涨��
	tmp=qpow(a,m,n);
	for(int j=0;j<cnt;j++)
        {
	    ans=1ll*tmp*tmp%n;
	    if(ans==1)
            {
                if(tmp!=1 && tmp!=n-1)
                    return false;
	        break ;
	    }
	    tmp=ans;
	}
	if(ans!=1) return false;
    }
    return true;
}
int Zeller(int y)
{
    int d=y%100;y/=100;//��
    int m=y%100;y/=100;//��
    if(m==1 || m==2) y--,m+=12;
    int c=y/100;y%=100;
    return ((y+y/4+c/4-2*c+26*(m+1)/10+d-1)%7+7)%7;
}

int main()
{
    long long int dayCode;
    while(scanf("%lld",&dayCode)!=EOF)
    {
        long long dayPassed=0;
        for(long long i=dayCode+1;i<=99991231;i++)
        {
            if(i==99991230)
            {
                printf("-1\n");
                break;
            }
            if(!isday(i))continue;
            if(isprime(i)==0)
            {
                dayPassed++;
                continue;
            }

            printf("%lld %lld ",i,++dayPassed);
            switch(Zeller(i))
            {
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            }
            break;
        }
    }
    return 0;
}
