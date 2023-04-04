#include <unistd.h>

void inter(char *s1, char *s2)
{
    int array_size[127] = {0};
    for(int i = 0; s1[i]; i++)
    {
        for(int j = 0; s2[j]; j++)
        {
            if(s1[i] == s2[j] && !array_size[(int)s1[i]])
            {
                write(1, &s1[i], 1);
                array_size[(int)s1[i]]++;
            }
        }
    }
}

int main(int ac, char **av)
{
    if(ac == 3)
        inter(av[1], av[2]);
    write(1, "\n", 1);
}