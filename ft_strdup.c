#include <stdlib.h>
char *ft_strdup(char *src)
{
    char *array;
    int i = 0;
    while(src[i])
    {
        i++;
    }
    array = (char*)malloc((i +1)*(sizeof(char)));
    if(!array)
    {
        return (NULL);
    }
    i = 0;
    while(src[i])
    {
        array[i] = src[i];
        i++;
    }
    array[i] = '\0';
    return (array);
}

#include <stdio.h>
int main()
{
    char *dest;
    char *src = "merhaba";
    dest = ft_strdup(src);
    printf("%s", dest);
}