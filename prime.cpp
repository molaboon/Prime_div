#include <stdio.h>
#include <math.h>

int prime_div(int start, int n, int *d, int *cnt)
{
    int limit = 0;
    limit = sqrt(n);
    for( ; start < limit; start++)
    {
        if(n % start == 0) {
            n = n % start;
            d[*cnt] = start;
            *cnt += 1;
            return 1 + prime_div(start, n, d, cnt);
        }
    }
    if (cnt == 0)
    {
        d[*cnt] == n;
    }
    return 1;
}
 
int main(void)
{   
    int n, n_div, cnt = 0;
    int div [128];

    scanf("%d", &n);
    n_div = prime_div(2, n, div, &cnt);

    printf("%d", div);

    return 0;
    
}