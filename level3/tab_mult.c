#include <unistd.h>

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
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        number = str[i] - '0' + (number * 10);
        i++;
    }
    return(number * sign);
}

void ft_putnbr(int n)
{
    if(n > 9)
        ft_putnbr(n/10);
    write(1, &"0123456789"[n%10], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int say = ft_atoi(av[1]);
        int i = 1;
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(say);
            write(1, " = ", 3);
            ft_putnbr(i * say);
            if(i != 9)
                write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
}