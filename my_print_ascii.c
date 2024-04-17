void print_char(char c);


void my_print_ascii(void)
{
int compteur = 33;
while (compteur < 127)
{
print_char(compteur);
compteur = compteur +1;
}
}