#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
            //Tutaj wprowadzamy stala wartośc //
    const int N = 500;
    int Z[N], i, j, L, W, maxL, maxW;

    // Generujemy zawartość Z [ ] 

    srand((unsigned)time(NULL));
    for (i = 0; i < N; i++) Z[i] = rand() % 100;

    // Wyszukujemy najczęstszą wartość

    maxL = 0;
    for (i = 0; i < N; i++)
    {
        W = Z[i]; L = 0;
        for (j = 0; j < N; j++) if (Z[j] == W) L++;
        if (L > maxL)
        {
            maxL = L; maxW = W;
        }
    }

    // tablica

    for (i = 0; i < N; i++)
        if (Z[i] == maxW) cout << " >" << std::setw(2) << Z[i];
        else                  cout << std::setw(4) << Z[i];

    //najczęstszy element oraz liczbę wystąpień

    cout << endl << maxW << ": " << maxL << endl << endl;
    return 0;
}
