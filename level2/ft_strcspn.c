#include <string.h>
#include <stdio.h>

size_t ft_strcpsn(const char  *s, const char *reject)
{
    int i = 0;
    int j = 0;
    while(s[i])
    {
        j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    returnn(i);
}