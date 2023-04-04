#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    char tab;

    while(i < len)
    {
        tab = str[i];
        str[i] = str[len];
        str[len] = tab;
        i++;
        len--;
    }
    return(str);
}

int main()
{
    char a[] = "eymen arda";
    printf("%s\n", ft_strrev(a));
}