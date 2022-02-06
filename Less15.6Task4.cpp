/*
Вам даётся массив целых чисел, отсортированных по возрастанию. Необходимо вывести его на экран отсортированным в порядке возрастания модуля чисел

Пример:

Массив {-100,-50, -5, 1, 10, 15}

Вывод: 1, -5, 10, 15, -50, -100

Задание со звёздочкой: оптимизировать решение четвёртой задачи, чтобы оно совершало как можно меньше операций


*/

#include <iostream>
#include <vector>
using namespace std;


int main() 
{
    vector <int> numbers{ -100,-50, -5, 1, 10, 15 };

    for (int j = 0; j < numbers.size(); j++)
    {
            for (int i = 0; i < numbers.size() - j - 1; i++)
            {
                if (abs(numbers[i]) > abs(numbers[i + 1]))
                {
                    int temp = numbers[i];
                    numbers[i] = numbers[i + 1];
                    numbers[i + 1] = temp;
                }
            }
    }
    for (int k = 0; k < numbers.size(); k++)
    {
            cout << numbers[k] << " ";
    }
        cout << endl;
}