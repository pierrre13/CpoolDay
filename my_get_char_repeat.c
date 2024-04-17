int my_get_char_repeat(char to_find, const char *to_search)
{
    int compteur = 0;
    int itteration = 0;
   while(to_search[compteur] != '\0')
    {
        if(to_search[compteur] == to_find)
        {
            itteration++;
        }
    compteur++;
    }
    if (itteration == 0)
    {
    return itteration;
    }
    else
    {
    return itteration+1;
    }
}