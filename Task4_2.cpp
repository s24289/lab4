// Zadanie z możliwoscia wprowadzania danych przez uzytkownika
#include <iostream>
using namespace std;
int main()
{
    

    int n;
    cout << "Write value of index" << endl << endl;
    cin >> n;
    int* tab = new int[n] {};
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Write value for Tab [" << i << "] ";
        cin >> tab[i];
    }
    int count = 0;
    cout << endl << "The most common items are: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tab[i] == tab[j])
            {
                cout << tab[j] << " ";
            }
        }
    }
    cout << endl;
}
