#include <unistd.h>

void putnbr(int n)
{
    if(n > 15)
        putnbr(n/16);    
    write(1, &"0123456789abcdef"[n%16], 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int number = 0;

    while(str[i] <= 32)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign*= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        number = str[i] - '0' + (number * 10);
        i++;
    }
    return(number * sign);
}

int main(int ac, char **av)
{
    if(ac == 2)
        putnbr(ft_atoi(av[1]));
    write(1, "\n", 1);
}