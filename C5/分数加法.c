#include<stdio.h>


long long int gcd(long long a,long long b)
{
    if(a%b==0){return b;}
    return gcd(b,a%b);
}

int main()
{
    long long int x1,y1,x2,y2;
    while(scanf("%lld/%lld %lld/%lld",&x1,&y1,&x2,&y2)!=EOF)
    {
        int fu1=0,fu2=0;
        long long int ans;
        if(x1<0)
        {
            fu1=1;
            x1=-x1;
        }
        if(x2<0)
        {
            fu2=1;
            x2=-x2;
        }
        int gcd1=gcd(x1,y1);
        int gcd2=gcd(x2,y2);
        x1/=gcd1;   y1/=gcd1;
        x2/=gcd2;   y2/=gcd2;
        long long int maxGcd = y1*y2/gcd(y1,y2);
        x1 = x1*maxGcd/y1;
        x2 = x2*maxGcd/y2;
        if((fu1==1&&fu2==1)||(!(fu1==1)&&!(fu2==1)))
        {
            ans=x1+x2;
            int gcd3=gcd(ans,maxGcd);
            ans/=gcd3;  maxGcd/=gcd3;
            if(fu1==1)printf("-");
            printf("%lld/%lld\n",ans,maxGcd);
        }
        else
        {
            if(fu1==1)x1=-x1;
            if(fu2==1)x2=-x2;
            ans=x1+x2;
            int gcd3=gcd(ans,maxGcd);
            ans/=gcd3;  maxGcd/=gcd3;
            printf("%lld/%lld\n",ans,maxGcd);
        }
    }
    return 0;

}

