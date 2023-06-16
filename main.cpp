#include <iostream>
using namespace std;
#include <ctime>



int main()
{   
    setlocale(0, "RUS");
    int input;

    cout << "Выберите что нарисовать:\n";
    cout << "1:Главную диагональ с пространством сверху.\n2:Главную диагональ с пространством снизу.\n3:Триугольник сверху.\n4:Триугольник снизу\n5:Триугольник слева.\n";
    cout << "6:Побочная диагональ с пространством сверху.\n7:Побочная диагональ с пространством снизу.\n";
    cin >> input;
    switch(input) 
    {
    case 1:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == j || i < j)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    break;
    case 2: 
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i == j || i > j)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    break;
    case 3:
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10 - i; j++)
            {
                if (i < j)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    break;
    case 4:
      for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i < j || i + j < 10 - 1)
                    cout << " ";
                else
                    cout << "#";
            }
            cout << "\n";
        }
    break;
    case 5:
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10 - i; j++)
            {
                if (i >= j)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    break;
    case 6:
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i + j <= 10 - 1)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    break;
    case 7:
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i + j >= 10 - 1)
                    cout << "#";
                else
                    cout << " ";
            }
            cout << "\n";
        }

    }
}
