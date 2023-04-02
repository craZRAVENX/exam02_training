#include <unistd.h>
#include <stdlib.h>

int word_count(char *str, char c)
{
    int i = 0;
    int count = 0;
    while(str[i] && str[i] == c)
        i++;
    while(str[i])
    {
        while(str[i] && str[i] != c)
            i++;
        count++;
        while(str[i] && str[i] == c)
            i++;
    }
    return(count);
}

void putstring(char *str)
{
    int i = 0;
    while(str[i])
        write(1, &str[i++], 1);
}

char **ft_split(char *str, char c)
{
    int i = 0;
    int j = 0;
    int u = 0;
    int x = 0;
    char **resque = (char **)malloc(sizeof(char *) * (word_count(str,c)) + 1);

    while(str[i] && str[i] == c)
        i++;
    while(str[i])
    {
        j = 0, u = 0;
        while(str[i + u] && str[i + u] != c)
            u++;
        resque[x] = (char *)malloc(sizeof(char) * u + 1);
        while(str[i] && str[i] != c)
        {
            resque[x][j++] = str[i++];
        }
        resque[x][j] = '\0';
        x++;
        while(str[i] && str[i] == c)
            i++;
    }
    resque[x] = NULL;
    return(resque);
}

int main(int ac, char **av)
{
    if(ac >= 2)
    {
        char **ret = ft_split(av[1] , ' ');
        for(int i = 1; ret[i]; i++)
        {
            putstring(ret[i]);
            write(1, " ", 1);
        }  
        putstring(ret[0]);
    }
    write(1, "\n", 1);
}