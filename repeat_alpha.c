/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/
#include <unistd.h>
int main(int argc, char *argv[])
{
   int j,count;
   
   j = 0;

   char c;
   count = 0;

   if(argc == 2)
   {
        while(argv[1][j])
        {
            c = argv[1][j];
            if(c>='a' && c<= 'z')
            {
                count = c- 'a' + 1;
            }
            if(c>='A' && c<= 'Z')
            {
                count = c- 'A' + 1;
            }
            while(count > 0)
            {
                write(1,&c,1);
                count--;
            }
            j++;
        }
   }
   write(1,"\n",1);
   return 0;
}
