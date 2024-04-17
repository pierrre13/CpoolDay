void print_char(char c);

void my_print_n_ascii(int howMany){
int compteur = 33;
while (compteur < howMany+33)
{
print_char(compteur);
compteur = compteur +1;
}
}