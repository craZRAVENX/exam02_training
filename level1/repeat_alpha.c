#include <unistd.h>

void repeat_alpha(char *str)
{
    int i = 0;
    int count = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            count = str[i] - 96;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            count = str[i] -64;
        else
            write(1, &str[i], 1);
        while(count > 0)
        {
            write(1, &str[i], 1);
            count--;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        repeat_alpha(av[1]);
    }
    write(1, "\n", 1);
}