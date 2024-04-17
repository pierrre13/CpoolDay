void print_char(char c);

void my_print_revert(char *toRevert)
{
    int len = 0;
   while(toRevert[len] != '\0')
    {
    len=len +1;
    } 
    int compteur = 0;
       while(compteur != len+1)
    {
    print_char(toRevert[len-compteur]);
    compteur = compteur+1;
    }
}