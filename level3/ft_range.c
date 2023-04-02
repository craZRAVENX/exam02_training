#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int abs(int n)
{
    if(n < 0)
        return(-n);
    return(n);
}

int *ft_range(int start, int end)
{
    int x = 0;
    int *array_range = (int *)malloc(sizeof(int) * abs(end - start) + 1);
    if(end < start)
    {
        for(int i = start; i >= end;i--)
        {
            array_range[x] = i;
            x++;
        }
    }
    else
    {
        for(int i = start; i <= end; i++)
        {
            array_range[x] = i;
            x++;
        }
    }
    return(array_range);
}

int main()
{
    int a = 5;
    int b = 12;
    int *res = ft_range(a, b);
    for(int i = 0; i <= abs(a -b); i++)
    {
        printf("%d\n", res[i]);
    }
}