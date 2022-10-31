//Найти максимальный и минимальный элементы главной диагонали вещественной матрицы Z[9][9] и поменять их местами
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <random>
#include <ctime>
#include <iomanip>
#include <Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    HANDLE h;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    float Z[9][9], max = -100, min = 100;
    int i, j, null = 0, max_num_i = 0, max_num_j = 0, min_num_i = 0, min_num_j = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == j)
            {
                SetConsoleTextAttribute(h, 2);
            }
            Z[i][j] = (-1000 + rand() % 2000) * 0.01;// от -10 до 10
            cout << setprecision(5) << setw(10) << Z[i][j];
            if (i == j)
            {
                SetConsoleTextAttribute(h, 15);
            }
            if (i == j)
            {
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
        }
        cout << endl;
    }

    cout << endl << "Наибольший элемент главной диагонали находится в позиции: [" << max_num_i + 1 << "]" << "[" << max_num_j + 1 << "]" << " и равен:" << max <<  endl;
    cout << endl << "Наименьший элемент главной диагонали находится в позиции: [" << min_num_i + 1 << "]" << "[" << min_num_j + 1 << "]" << " и равен:" << min << endl;
    cout << endl << "Изменённый массив:" << endl << endl;
    swap(Z[max_num_i][max_num_j], Z[min_num_i][min_num_j]);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == j)
            {
                SetConsoleTextAttribute(h, 2);
            }
            if (i == min_num_i and j == min_num_j)
            {
                SetConsoleTextAttribute(h, 9);
            }
            if (i == max_num_i and j == max_num_j)
            {
                SetConsoleTextAttribute(h, 9);
            }
            cout << setprecision(5) << setw(10) << Z[i][j];
            if (i == j)
            {
                SetConsoleTextAttribute(h, 15);
            }
        }
        cout << endl;
    }
}