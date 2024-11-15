/*Написать только одну функцию, которая ставит в начало массива все четные
элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[])

Данные на входе: Функция принимает на вход целые числа
Данные на выходе: Отсортированный исходный массив.*/

#include <stdio.h>
#include <stdbool.h>

void sort_even_odd(int n, int a[])
{
    bool breakFlag = true;
    int temp;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (a[j] % 2 == 1)
        {
            if (j == n - 1)
            {
                breakFlag = false;
                break;
            }
            j++;
        }
        if (breakFlag)
        {
            temp = a[j];
            for (int k = j; k > i; k--)
            {
                a[k] = a[k - 1];
            }
            a[i] = temp;
        }
    }
}