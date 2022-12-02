//Для заданной квадратной матрицы найти след матрицы и четные строки разделить на полученное значение.
#include<iostream>
using namespace std;

void main()
{
    int n, k = 0, sum = 0, arr[20][20] = {};
    float arr1[20][20] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(*(arr + i) + j);
            if (j == k)
                sum += *(*(arr + i) + j);
        }
        k += 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            *(*(arr1 + i) + j) = *(*(arr + i) + j);
        }
    }
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            for (int j = 0; j < n; j++) {
                *(*(arr1 + i) + j) /= float(sum);
            }
        }
    }
    cout << sum;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(*(arr1 + i) + j);
        }
    }
}