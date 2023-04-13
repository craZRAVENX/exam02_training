#include <stdlib.h>
#include <stdio.h>

int abs(int n)
{
    if(n < 0)
        return(-n);
    return(n);
}

int     *ft_rrange(int start, int end)
{
	int *array = (int *)malloc(sizeof(int) * (abs(end - start) + 1));
	int x = 0;

	if(end < start)
	{
		for(int i = start; i >= end; i--)
		{
			array[x] = i;
			x++;
		}
	}
	else if(end > start)
	{
		for(int i = start;i <= end;i++)
		{
			array[x] = i;
			x++;
		}
	}
	return(array);
}

int main()
{
	int s = 3;
	int e = 8;
	int *array = ft_rrange(e, s);
	
	for(int i = 0; i <= abs(e -s); i++)
    {
        printf("%d\n", array[0]);
    }
}
