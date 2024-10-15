#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
}

int findMin(int* arr, int SIZE) {
    int min = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int findMax(int* arr, int SIZE) {
    int max = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);

    Print(arr, SIZE);
    cout << "\n\n";
    cout << "Мінімальне значення = " << findMin(arr, SIZE) << endl;
    cout << "Максимальне значення = " << findMax(arr, SIZE) << endl;
    cout << endl;
    cout << "Сума мінімального та максимального числа: " << findMin(arr, SIZE) + findMax(arr, SIZE) << endl;

    delete[] arr;

    return 0;
}
