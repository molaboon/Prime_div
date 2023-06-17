#include <stdio.h>
#include <math.h>

int cnt = 0;
int prime_div(int start, int n, int d[])
{
    int limit = 0;
    limit = sqrt(n);
    for(start = 2 ; start <= limit; start++)
    {
        if(n % start == 0) 
	{
            n = n / start;
            d[cnt] = start;
            cnt++;
	   
            return 1 + prime_div(start, n, d);
        }

    }
    d[cnt] = n;
    
    return 1;
}
 
int main(void)
{   
    int n, n_div;
    int div [128] = {0};

    scanf("%d", &n);
    n_div = prime_div(2, n, div);
    printf("\n");

    for (int i = 0; div[i] != 0; i++)
    {
    	printf("%d ", div[i]);
    }
    printf("\n");

    return 0;
    
}
