#include <unistd.h>
#include <stdlib.h>

void putstring(char *str)
{
    int i =0;
    while(str[i])
        write(1, &str[i++], 1);
}

int word_count(char *str, char c)
{
    int i =0;
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
char **ft_split(char *str, char c)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int u = 0;
    char **res = (char **)malloc(sizeof(char *) * (word_count(str, c) + 1));

    while(str[i] && str[i] == c)
        i++;
    while(str[i])
    {
        j = 0, u = 0;
        while(str[i+u] && str[i+u] != c)
            u++;
        res[x] = (char *)malloc(sizeof(char) * u+ 1);
        while(str[i] && str[i] != c)
        {
            res[x][j++] = str[i++];
        }
        res[x][j] = '\0';
        x++;
        while(str[i] && str[i] == c)
            i++;
    }
    res[x] = NULL;
    return(res);
}

int main(int ac, char **av)
{
	int i = 0;
	char **tab;
	if (ac == 2)
	{
		tab = ft_split(av[1], ' ');
		while (tab[i])
			i++;
		i--;
		while (i >= 0)
		{
			putstring(tab[i]);
			if (i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
