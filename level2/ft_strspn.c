#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j =0;
    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
                return(j);
            j++;
        }
        i++;
    }
    return(j);
}

int main()
{
    char a[] ="hello world";
    char b[] = "hewol";

    printf("%zu\n",  ft_strspn(a, b));
    printf("%zu\n", strspn(a, b));
}