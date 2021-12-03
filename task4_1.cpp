
#include <iostream>

using namespace std;


int main()
{
    int n, max, pom;

    cout << "How many numbers do you want to load? ";
    cin >> n;

    cin >> max; 

    for (int i = 1;i < n;i++) 
        cin >> pom;
    if (max < pom)
    {
        max = pom;
    }


    cout << "The largest numer loaded is " << max << endl;

    return 0;
}
