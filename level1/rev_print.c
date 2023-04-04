#include <unistd.h>
#include <stdio.h>

char *rev_print(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    i--;
    while(str[i] >= 0)
        write(1, &str[i--],1);
    return(str);
}

int main()
{
    char a[] = "eymen arda";
    printf(" %s\n", rev_print(a));
}