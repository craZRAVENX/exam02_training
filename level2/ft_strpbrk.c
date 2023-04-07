#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                return ((char*)&s1[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

int main()
{
    char a[] = "eymen";
    char b[] = "ay";
    printf("%s\n", ft_strpbrk(a, b));
    printf("%s", strpbrk(a, b));
}