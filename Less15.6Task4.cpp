/*
Вам даётся массив целых чисел, отсортированных по возрастанию. Необходимо вывести его на экран отсортированным в порядке возрастания модуля чисел

Пример:

Массив {-100,-50, -5, 1, 10, 15}

Вывод: 1, -5, 10, 15, -50, -100

Задание со звёздочкой: оптимизировать решение четвёртой задачи, чтобы оно совершало как можно меньше операций

Вектор менять не нужно, достаточно найти первый неотрицательный элемент и от него двигаться в различные стороны и выводить элементы

*/

#include <iostream>
#include <vector>
using namespace std;


int main() 
{
    vector <int> numbers{ -100,-50, -5, 1, 10, 15 };

   /* for (int j = 0; j < numbers.size(); j++)
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
    */
    int nMin = -1;
    for (int i=0; i < numbers.size(); i++)
        {
            if (nMin == -1 && numbers[i] < 0) continue;
            if (nMin == -1 && numbers[i] >= 0)
            {
              nMin = i;
              cout << numbers[nMin] << " ";
              break;
            }
        }  
    //while (j >= 0 || i < v.size()) {
    //int res = (j >= 0 && (i == v.size() || v[i] > -v[j]) ? v[j--] : v[i++]);

    for (int j = 1, k = 1; nMin - j >= 0 || nMin + k < numbers.size();)
    {
        if (nMin - j >= 0 && (nMin + k == numbers.size() || abs(numbers[nMin - j]) < abs(numbers[nMin + k])))
        {
            cout << numbers[nMin - j++] << " ";
            //if (nMin - j >= 0) ++j;
        }
        else
        {         
            cout << numbers[nMin + k++] << " ";
            //if (nMin + k < numbers.size()) ++k;
        }
    }

        //if (nMin != -1)
        //    cout << numbers[k] << " ";
}