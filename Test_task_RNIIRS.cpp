#include <iostream>
#include <thread>
#include "windows.h" // для слип
#include <queue>

using namespace std;

const int n = 8;

void Print_matrix(int matrix[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] + i + j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Matrix_generation(int matrix_element[][n]) // генерирует матрицу NxN
{
    srand(time(NULL));
    int random = 0;
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
         {
            random = rand()% 100 + 1;
            matrix_element[i][j] = random;
         }
}

int Matrix_determinant(int matrix_element[][n]) // вычисляем определитель матрицы 
{
    int determinant = 0;


    return determinant;
}

void Top_10_determinant() // список из 10 матриц с максимальным определителем
// нужно проверять на больше 10 места
{

}

int main()
{
    int top_Matrix[10][n][n] = { 0 };
    
    queue <int> queue_matrix;
    queue <int*> queue_m;

    srand(time(0));

    for (int i = 0; i < 15; i++)
    {
        int matrix_element[n][n] = { 0 };

        thread m_g(Matrix_generation, ref(matrix_element)); // ref передает по ссылке значение 
        m_g.join();

        queue_matrix.push(matrix_element[n-2][n-2]);
        queue_m.push(matrix_element[1]);


        Sleep(1000);   //// не слип надо

        Print_matrix(matrix_element);
        cout << queue_matrix.front() << endl;
        queue_matrix.pop();

        cout << *(queue_m.front()) << endl;
        queue_m.pop();

    }
    
    return 0;
}