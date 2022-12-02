//Сформировать из некоторой матрицы A(n,n) верхнетреугольную матрицу С(n,n)
#include<iostream>
using namespace std;

void main()
{
    int n, arr[20][20] = {}, k = 0;
    cout << "Введите размер матрицы: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j < k)
            {
                *(*(arr + i) + j) = 0;
                int x;
                cin >> x;
            }
            else cin >> *(*(arr + i) + j);
        k += 1;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cout << *(*(arr + i) + j);
    cout << "\n";
}