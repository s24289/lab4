#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for (int y = 0; y < 10; y++)//kolumna
	{
		for (int x = 0; x < 10; x++)//wiersze
		{
			if (x == 0)//pierwsza kolumna
			{
				cout << setw(5) << y;
			}

			else if (x == 1)//druga kolumna
			{
				int k = y + y;
				cout << setw(5) << k;

			}
			else if (x == 2)//trzecia kolumna
			{
				int k2 = y * y;
				cout << setw(5) << k2;
			}
			else if (x == 3)//czwarta kolumna
			{
				int k3 = x + y;
				cout << setw(5) << k3;
			}
			else if (x == 4)//piąta kolumna
			{
				int k4 = x - y;
				cout << setw(5) << k4;
			}

			else//reszte wypenia zerami
			{
				cout << setw(5) << "0";

			}
		}
		cout << endl;
	}
}

