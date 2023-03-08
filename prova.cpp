int *rimuovi(int base[], int dim, int numerodaeliminare)
{
    int risultato[dim-1];
 
    for (int i = 0; i < dim; i++) 
    {
        risultato[i] = base[i];
    }
 
    for (int i = 0; i < dim - 1; i++) 
    {
       if( risultato[i] == numerodaeliminare)
    }
    return risultato;
}
 
int main()
{
 
    int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dim = sizeof(input) / sizeof(input[0]);
    int elemento = 13;
    int cerca = 5;
    int posizione = 5;
 