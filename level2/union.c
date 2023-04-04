#include <unistd.h>

int main(int ac, char **av)
{
    int array_size[127] = {0};
    if(ac == 3)
    {
        for(int i = 0;av[1][i]; i++)
        {
            if(!array_size[(int)av[1][i]])
            {
                write(1, &av[1][i], 1);
                array_size[(int)av[1][i]]++;
            }
        }
        for(int i = 0;av[2][i]; i++)
        {
            if(!array_size[(int)av[2][i]])
            {
                write(1, &av[2][i], 1);
                array_size[(int)av[2][i]]++;
            }
        }
    }
    write(1, "\n", 1);
}