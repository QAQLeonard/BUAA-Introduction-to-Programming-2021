#include <stdio.h>
#include <stdbool.h> 

bool f[1000][1000] = {false};

int main() 
{

    int a;
    int d = 0;
    int ct = 0;
    scanf("%d", &a);
    f[0][2] = true;
    f[1][2] = true;
    f[0][3] = true;
    f[2][3] = true;
    f[3][3] = true;
    for (int t = 4; t <= a; t++) 
    { //f肯定是要一项一项算的
        
		f[0][t] = true;
        
		for (int r = 2; r <= t; r++) 
	    { //平行线从两条到t条
            
			for (int i = 0; i <= (t - r) * (t - r - 1) / 2; i++) 
			{
                
				if (f[i][t - r]) //先讨论不平行的 
				{
                    d = i + r * (t - r);
                    f[d][t] = true;
                }
            }
        }
        
		for (int i = 0; i <= (t - 1) * (t - 2) / 2; i++) 
	    {
            if (f[i][t - 1]) 
		    {
                d = i + (t - 1);
                f[d][t] = true;
            }
        }
    }
    
    for (int m = 0; m <= a * (a - 1) / 2; m++) 
	{
        if (f[m][a]){ct++;}
    }
    
    printf("%d", ct);
    
    return 0;
}
