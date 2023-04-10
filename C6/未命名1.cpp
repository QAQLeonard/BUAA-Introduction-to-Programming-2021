#include<stdio.h>
int a[9][9];
int check_s(int a[9][9], int m, int n);
int check_m(int a[9][9], int m);
int check_n(int a[9][9], int n);
int main()
{
    int i, j, ok;
    ok = 1;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<9; i++)
    {
        ok = check_m(a, i);
        if(ok==0)
        {
            printf("Emergency food! ~>_<~");
            return 0;
        }
    }
    for(i=0; i<9; i++)
    {
        ok = check_n(a, i);
        if(ok==0)
        {
            printf("Emergency food! ~>_<~");
            return 0;
        }
    }
    for(i=0; i<9; i+=3)
    {
        for(j=0; j<9; j+=3)
        {
            ok = check_s(a, i, j);
            if(ok==0)
            {
                printf("Emergency food! ~>_<~");
                return 0;
            }
        }
    }
    printf("Cheers! O(^_^)O");
    return 0;
}

int check_s(int a[9][9], int m, int n)
{
    int i, j, sum, cnt, ok;
    int b[9] = {0};
    sum = 0;
    cnt = 0;
    ok = 1;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum += a[m+i][n+j];
            b[cnt] = a[m+i][n+j];
            cnt++;
        }
    }
    if(sum==45)
    {
        for(i=0; i<9; i++)
        {
            for(j=0; j<i; j++)
            {
                if(b[i]==b[j])
                ok = 0;
            }
        }
    }
    else
    ok = 0;
    return ok;
}

int check_m(int a[9][9], int m)
{
    int i, j, sum, ok; 
    int b[9] = {0};
    sum = 0;
    ok = 1;
    for(i=0; i<9; i++)
    {
        sum += a[m][i];
        b[i] = a[m][i];
    }
    if(sum==45)
    {
        for(i=0; i<9; i++)
        {
            for(j=0; j<i; j++)
            {
                if(b[i]==b[j])
                ok = 0;
            }
        }
    }
    else
    ok = 0;
    return ok;
}
int check_n(int a[9][9], int n)
{
    int i, j, sum, ok; 
    int b[9] = {0};
    sum = 0;
    ok = 1;
    for(i=0; i<9; i++)
    {
        sum += a[i][n];
        b[i] = a[i][n];
    }
    if(sum==45)
    {
        for(i=0; i<9; i++)
        {
            for(j=0; j<i; j++)
            {
                if(b[i]==b[j])
                ok = 0;
            }
        }
    }
    else
    ok = 0;
    return ok;
}

