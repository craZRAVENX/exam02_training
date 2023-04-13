#include <unistd.h>

void putnbr(int n)
{
    if(n > 9)
        putnbr(n / 10);
    write(1, &"0123456789"[n% 10], 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int number= 0;
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

int is_prime(int n)
{
    int i = 2;
    while(i < n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void prime_sum(int number)
{
    int i = 2;
    int res = 0;

    if(number <= 1)
        write(1, "0", 1);
    while(i <= number)
    {
        if(is_prime(i))
            res += i;
        i++;
    }
    putnbr(res);
}

int main(int ac, char **av)
{
    if(ac == 2)
        prime_sum(ft_atoi(av[1]));
    else   
        write(1, "0", 1);
    write(1, "\n", 1);
}