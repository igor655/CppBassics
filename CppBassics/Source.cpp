#include<iostream>
//#include<conio.h>


using namespace std;





#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<iostream>

#define N 15




// ќбъедин€ем два отсортированных подмассива `arr[lowЕmid]` и `arr[mid+1Еhigh]`
void Merge(int arr[], int aux[], int low, int mid, int high)
{
    int k = low, i = low, j = mid + 1;

    // ѕока есть элементы в левом и правом прогонах
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j]) {
            aux[k++] = arr[i++];
        }
        else {
            aux[k++] = arr[j++];
        }
    }

    //  опируем оставшиес€ элементы
    while (i <= mid) {
        aux[k++] = arr[i++];
    }

    // ¬торую половину копировать не нужно (поскольку остальные элементы
    // уже наход€тс€ на своем правильном месте во вспомогательном массиве)

    // копируем обратно в исходный массив, чтобы отразить пор€док сортировки
    for (int i = low; i <= high; i++) {
        arr[i] = aux[i];
    }
}

// —ортируем массив `arr[lowЕhigh]`, использу€ вспомогательный массив `aux`
void mergesort(int arr[], int aux[], int low, int high)
{
    // Ѕазовый вариант
    if (high == low) {        // если размер прогона == 1
        return;
    }

    // найти середину
    int mid = (low + ((high - low) >> 1));

    // рекурсивное разделение выполн€етс€ на две половины до тех пор, пока размер выполнени€ не станет == 1,
    // затем объедин€ем их и возвращаемс€ вверх по цепочке вызовов

    mergesort(arr, aux, low, mid);          // разделить/объединить левую половину
    mergesort(arr, aux, mid + 1, high);     // разделить/объединить правую половину

    Merge(arr, aux, low, mid, high);        // объединить два полупрогона.
}

// ‘ункци€ дл€ проверки, отсортирован ли arr в пор€дке возрастани€ или нет
int isSorted(int arr[])
{
    int prev = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (prev > arr[i])
        {
            printf("MergeSort Fails!!");
            return 0;
        }
        prev = arr[i];
    }

    return 1;
}

// –еализаци€ алгоритма сортировки сли€нием на C
int main(void)
{
    std::cout << "Merge sort 3 C vercsion\n";
    int arr[N], aux[N];
    srand(time(NULL));

    // генерируем случайный ввод целых чисел
    for (int i = 0; i < N; i++) {
        aux[i] = arr[i] = (rand() % 100) - 50;
    }

    // сортируем массив `arr`, использу€ вспомогательный массив `aux`
    mergesort(arr, aux, 0, N - 1);

    if (isSorted(arr))
    {
        for (int i = 0; i < N; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

