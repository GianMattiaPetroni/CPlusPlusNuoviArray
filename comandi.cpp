#include <iostream>
#include <string>
#include <array>

using namespace std;


int* aggiungiInFondo(int base[], int dim, int nuovo)
{
    int nuovaDim = dim + 1;
    int nuovoArray[nuovaDim];
    for (int i = 0; i < dim; i++)
    {
         nuovoArray[i] = base[i];
    }
    
    nuovoArray[nuovaDim] = nuovo;
    return nuovoArray;
}

int* aggiungiInTesta(int base[], int dim, int nuovo)
{
    int nuovaDim = dim + 1;
    int nuovoArray[nuovaDim];
    nuovoArray[0] = nuovo;
    for (int i = 1; i < dim; i++)
    {
        nuovoArray[i+1] = base[i];
    }
    return nuovoArray;
}
int* aggiungiInPosizione(int base[], int dim, int nuovo, int posizione)
{int nuovaDim = dim + 1;
    int nuovoArray[nuovaDim];
    for (int i = 0; i < posizione; i++)
    {
        nuovoArray[i] = base[i];
    }
     nuovoArray[posizione] = nuovo;
     for ( int i = posizione; i < nuovaDim; i++){
        nuovoArray[i] = base[i-1];
     }
     return nuovoArray;
    
}

// Read
int trovaPosizione(int base[], int dim, int cerca, int posizione)
{
    // todo
    return -1;
}

// Update
int *aggiornaInPosizione(int base[], int dim, int valore, int posizione)
{
    // todo
    return base;
}

int main()
{

    int base[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dim = 10;
    int nuovo = 11;
    int cerca = 5;
    int valore = 12;
    int posizione = 5;

    int* p = aggiungiInFondo(base, dim, nuovo);
    dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

     p = aggiungiInTesta(base, dim, nuovo);
    // dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    int* p = aggiungiInPosizione(base, dim, nuovo, posizione);
    // dim++;
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    cout << trovaPosizione(base, dim, cerca, posizione) << endl;

    int* p = aggiornaInPosizione(base, dim, valore, posizione);
    for (int i = 0; i < dim; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}  