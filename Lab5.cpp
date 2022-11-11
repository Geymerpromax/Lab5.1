//Отсортировать строки вещественной матрицы Z[9][9] по возрастанию
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
    float Z[9][9], temp = 0, max = -100, min = 100;
    int i, b, j, k = 0, null = 0, max_num_i = 0, max_num_j = 0, min_num_i = 0, min_num_j = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            Z[i][j] = (-100 + rand() % 2000) * 0.01;// от -10 до 10
            cout << setprecision(5) << setw(10) << Z[i][j];
           
        }
        cout << endl; 
    }

    for (i = 0; i < 9; i++) 
    {				
        for (k = i + 1; k < 9; k++) 
        {
            if (Z[0][i] >= Z[0][k]) 
            {
                for (j = 0; j < 9; j++)
                {
                    temp = Z[j][i];
                    Z[j][i] = Z[j][k];
                    Z[j][k] = temp;
                }
            }
        }
    }
    

    cout << endl << endl;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            cout << setprecision(5) << setw(10) << Z[i][j];
        }
        cout << endl;
    }
}