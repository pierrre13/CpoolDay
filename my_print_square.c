void print_char(char c);

void my_print_square(int size, char c){
int compteur;
int compteur1;
char *str;
for (compteur = 0; compteur<size;compteur++)
{
    for (compteur1 = 0; compteur1<size;compteur1++)
    {
        print_char(c);
    }
    print_char('\n');
}
}