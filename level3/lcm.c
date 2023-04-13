#include <stdio.h>

unsigned int lcm(int a, int b)
{
    unsigned int n;

    if(a == 0 ||  b == 0)
        return(0);
    if(a > b)
        n = a;
    else
        n = b;
    while (1)
    {
        if(n % a == 0 || n %b == 0)
            return(n);
        ++n;
    }   
}

int main()
{
    int a = 12;
    int b = 6;
    printf("%u\n", lcm(a, b));
}