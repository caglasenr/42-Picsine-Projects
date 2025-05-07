#include <unistd.h>
int main(int ac, char ** av)
{
    int i =0;
    int j = 0;
    char is_printed[255] = {0};

    while(av[1][i])
    {
        if (is_printed[av[1][i]] == 0)
        {
            write(1,&av[1][i],1);
            is_printed[av[1][i]] = 1;
        }
        i++;
    }
    while(av[2][j])
    {
        if (is_printed[av[2][j]] == 0)
        {
            write(1,&av[2][j],1);
            is_printed[av[2][j]] = 1;
        }
        j++;
    }
}
