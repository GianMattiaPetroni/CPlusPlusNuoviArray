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
}
 