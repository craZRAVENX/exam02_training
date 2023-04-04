int ft_atoi(const char *str)
{
    int sign = 1;
    int number = 0;
    int i = 0;

    while(str[i] <= 32)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i])
    {
        number = str[i] - '0' + (number * 10);
        i++;
    }
    return(number * sign);
}

#include <stdio.h>

int main()
{
    char a[] = "-122";
    printf("%d\n", ft_atoi(a));
}