/*Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])

Данные на входе: Функция принимает на вход размер массива и
массив чисел типа int
Данные на выходе: Функция не возвращает значения, измененный
массив сохраняется на месте исходного.*/

#include <stdio.h>

void change_max_min(int size, int a[])
{
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (a[i] > a[maxIndex])
        {
            maxIndex = i;
        }
        if (a[i] < a[minIndex])
        {
            minIndex = i;
        }
    }
    int temp = *(a + minIndex);
    *(a + minIndex) = *(a + maxIndex);
    *(a + maxIndex) = temp;
}