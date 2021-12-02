//lab6_2
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");   
    while (1)
    {
        //меню
        int z = 0;
        cout << "Выберите действие: 1 - вычисление, 0 - выход. \t";
        cin >> z;
        if (z != 1)
        {
            break;
        }
        system("cls");
        //создание и заполнение ряда из n чисел
        int n;
        cout << "Введите количество чисел в последовательности: \t";
        cin >> n;
        if(n>=2)
    {
        int *arr = new int[n];
        
        for (int k=0; k<n ;k++)
        {
            arr[k] = rand() % 100 - 50;
            cout<< arr[k]<< "\t";
        }
        
       cout<<"\n";
       cout<<"Создаётся матрица..."<<endl;
       cout<<"\n";
        
        //инициализация матрицы A(n*n)
        
        int rows = n;//строки
        int cols = n;//столбцы

        int** A = new int* [rows];
        for (int i = 0; i < rows; i++)
        {
            A[i] = new int[cols];
        }

        // заполнение матрицы (случайными числами)
        
        srand(time(NULL));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                A[i][j] = rand() % 41 - 20;
                cout << A[i][j]<< "\t";
            }
            cout<<endl;
        }
        
    cout<<"\n";
    
    cout<<"Проверка строк на *отмеченность*... "<<endl;
    cout<<"\n";
        
        //обработка строк матрицы
        
        for (int k=0; k<cols; k++) //cols = n
            {
                if (arr[k] > 0)
                {
                    cout << "Строка" << " " << k << " " << "отмеченная" << endl;
                }
                else
                {
                    cout << "Строка" << " " << k << " " << "неотмеченная" << endl;
                }
            }
        
    cout<<"\n";
        
        //обработка матрицы
    
    cout<<"Обработка матрицы..."<<endl;
    cout<<"\n";
    cout<<"Результат:"<<endl;
    int i=0;
        for (int k = 0; k < cols ; k++)
        {
            if (arr[k] > 0)
                {
                    for (int i=0; i <rows; i++)
                    {
                    if (A[k][i] < 0)
                        {
                            A[k][i] = -1;
                            cout << A[k][i]<< "\t";
                        }
                        else
                        {
                                if (A[k][i] > 0)
                                {
                                    A[k][i] = 1;
                                    cout << A[k][i]<< "\t";
                                }
                                else
                                {
                                    cout << A[k][i]<< "\t";
                                }   
                        }
                    }
                }
                if (arr[k] <= 0)
                {
                    for (i=0;i<cols;i++)
                    {
                        cout << A[k][i] << "\t";
                    }
                    
                }
        
            cout<<endl;
    }
        
        //очистка памяти
        for (int i = 0; i < rows; i++)
        {
            delete[] A[i];
        }
        delete[] A;
        cout<<"\n";
        cout<<endl;
    }
    else
        {
            cout<<"Ошибка! Маленькое число столбцов!\nНачните заново."<<endl;
        }
    system("cls");
    }
 system("pause");
}
