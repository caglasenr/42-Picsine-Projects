/*
Assignment name  : aff_a
Expected files   : aff_a.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$*/
#include <unistd.h>
int main(int argc,char* argv[])
{
    int i = 0;
 
    if(argc !=2)
    {
        write(1,"a\n",2);
        return 0;
    }
    while(argv[1][i])
    {
        if(argv[1][i]=='a')
        {
            write(1,"a\n",2);
            return 0;
        }
    i++;
    }
    write(1,"\n",1);
}