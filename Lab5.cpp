//В вещественной матрице Z[8][5] заменить максимальный и минимальный элементы нулями
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    float Z[8][5], max = -100, min = 100;
    int i, j, null = 0, max_num_i = 0, max_num_j = 0, min_num_i = 0, min_num_j = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            Z[i][j] = (-1000 + rand() % 2000) * 0.01;// от -10 до 10
            cout << setprecision(5) << setw(10) << Z[i][j];
            if (Z[i][j] > max)
            {
                max = Z[i][j];
                max_num_i = i;
                max_num_j = j;
            }
            if (Z[i][j] < min)
            {
                min = Z[i][j];
                min_num_i = i;
                min_num_j = j;
            }
        }
        cout << endl;
    }
    cout << endl << "Наибольший элемент находится в позиции: [" << max_num_i + 1 << "]" << "[" << max_num_j + 1 << "]" << endl;
    cout << endl << "Наименьший элемент находится в позиции: [" << min_num_i + 1 << "]" << "[" << min_num_j + 1 << "]" << endl;
    cout << endl << "Изменённый массив:" << endl << endl;
    Z[max_num_i][max_num_j] = 0;
    Z[min_num_i][min_num_j] = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << setprecision(5) << setw(10) << Z[i][j];
        }
        cout << endl;
    }
}