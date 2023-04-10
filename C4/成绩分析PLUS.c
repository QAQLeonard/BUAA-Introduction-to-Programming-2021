#include<stdio.h>
#include<limits.h>

int main()
{
    int N;
    scanf("%d",&N);
    long long int sumOfA=0,sumOfB=0,sumOfC=0;
    int numOfA=0,numOfB=0,numOfC=0;
    int maxOfA=INT_MIN,maxOfB=INT_MIN,maxOfC=INT_MIN;
    int minOfA=INT_MAX,minOfB=INT_MAX,minOfC=INT_MAX;
    for(int i=1;i<=N;i++)
    {
        char temp;
        int score;
        scanf("%c %d\n",&temp,&score);
        switch(temp)
        {
        case 'A':
            sumOfA+=score;
            numOfA++;
            if(score>maxOfA)maxOfA=score;
            if(score<minOfA)minOfA=score;
            break;
        case 'B':
            sumOfB+=score;
            numOfB++;
            if(score>maxOfB)maxOfB=score;
            if(score<minOfB)minOfB=score;
            break;
        case 'C':
            sumOfC+=score;
            numOfC++;
            if(score>maxOfC)maxOfC=score;
            if(score<minOfC)minOfC=score;
            break;
        }
    }
    printf(sumOfA/numOfA<sumOfB/numOfB?(sumOfB/numOfB<sumOfC/numOfC?"C\n":"B\n"):(sumOfA/numOfA<sumOfC/numOfC?"C\n":"A\n"));

    printf("%d %d\n",maxOfA,minOfA);
    printf("%d %d\n",maxOfB,minOfB);
    printf("%d %d\n",maxOfC,minOfC);


}
