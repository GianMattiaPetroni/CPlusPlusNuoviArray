#include <iostream>
using namespace std;

int *rimuovinumero(int base[], int dim, int numerodaeliminare)
{
    int contatorenumerodaeliminare = 0;
    for (int i = 0; i < dim; i++)
    {
        if (base[i] == numerodaeliminare)
        {
            contatorenumerodaeliminare++;
        }
    }
    int* risultato = new int[dim - contatorenumerodaeliminare];

    for (int i = 0; i < dim - contatorenumerodaeliminare; i++) // PRIMA PARTE
    {
        if (base[i] == numerodaeliminare){
            for (int j = i; j < dim; j++){
                risultato[j] = risultato[j+1];
            }
        }
    }

    for (int i = posizione; i < dim - 1; i++) // SECONDA PARTE
    {
        risultato[i] = base[i + 1];
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

    stampa(input, dim);

    int *p = aggiungiInFondo(input, dim, elemento);

    stampa(p, dim + 1);

    return 0;
}
