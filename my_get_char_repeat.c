int my_get_char_repeat(char to_find, const char *to_search)
{
    int compteur = 0;
    int itteration = -1;
   while(to_search[compteur] != '\0')
    {
        if(to_search[compteur] == to_find)
        {
            itteration++;
        }
    compteur++;
    }
    return itteration;
}