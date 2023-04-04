#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_strdup(char *str)
{
    int i = 0;
    char *res = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
    if(!res)
        return(NULL);
    while(str[i])
    {
        res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return(res);
}