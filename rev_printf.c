/*
Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/
#include <unistd.h>
int main(int ac,char *argv[])
{
    if(ac !=2)
    {
        write(1,"\n",1);
        return 0;
    }
    int i =0;
    while(argv[1][i])
        i++;
    i -= 1;
    while(argv[1][i])
    {
        write(1,&argv[1][i],1);
        i--;
    }
    return 0;
}