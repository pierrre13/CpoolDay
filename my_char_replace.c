void print_char(char c);

char *my_char_replace(char *origin, char toFind, char toReplace)
{
    char *final;
    int compteur = 0;
   while(origin[compteur] != '\0')
    {
    if(origin[compteur] == toFind)
    {
        final[compteur] = toReplace;
    }
    else
    {
        final[compteur] = origin[compteur];
    }
    compteur=compteur +1;
    } 
    return final;
}