float my_average(int *grades, int count){
    int compteur;
    float moyenne;
    for (compteur=0; compteur<count;compteur++)
    {
        moyenne = moyenne + grades[compteur];
    }
    return moyenne/count;
}