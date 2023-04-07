#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int word_count(char *str)
{
    int i = 0;
    int count = 0;
    while(str[i] && str[i] <= 32)
        i++;
    while(str[i])
    {
        while(str[i] && !(str[i] <= 32))
            i++;
        count++;
        while (str[i] && str[i] <= 32)
            i++;
    }
    return(count);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int u = 0;
    int x = 0;
    char **res = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
    if(!res)
        return(NULL);
    while(str[i] && str[i] <= 32)
        i++;
    while(str[i])
    {
        j = 0, u = 0;
        while(str[i+ u] && !(str[i+u] <= 32))
            u++;
        res[x] = (char *)malloc(sizeof(char) * (u + 1));
        while (str[i] && !(str[i] <= 32))
        {
            res[x][j++] = str[i++];
        }
        res[x][j] = '\0';
        x++;
        while(str[i] && str[i] <=32)
            i++;
    }
    res[x] = NULL;
    return(res);
}

// int main()
// {
//     char *a = strdup("eymen arda hafsa alp yalman");
//     char **b= ft_split(a);
//     for(int i = 0;b[i];i++)
//         printf("%s\n", b[i]);
// }
