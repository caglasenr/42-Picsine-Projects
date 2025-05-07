#include <unistd.h>
char putnb(int nb)
{
    char c;
    if(nb >= 10)
    {
        putnb(nb/10);
    }
    c = nb %10 + '0';
    write(1,&c,1);

}
int main()
{
    int i = 1;


    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            write(1, "fizzbuzz\n", 9);
        }
        else if(i % 3 == 0)
        {
            write(1, "fizz\n", 5);
        }
        else if (i % 5 == 0)
        {
            write(1, "buzz\n", 5);
        }
        else
        {
            putnb(i);
            write(1, "\n", 1);

        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}