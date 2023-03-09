#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

class Sort
{

public:


    double BubbleSort(int *A1, int size){
            int aux;
            clock_t start = clock();
            for (int i = 0; i < size - 1; ++i) {
                for (int j = 0; j < size - i - 1; ++j) {
                    if (A1[j] > A1[j + 1]) {
                        aux = A1[j];
                        A1[j] = A1[j + 1];
                        A1[j + 1] = aux;
                    }
                }
            }
            clock_t end = clock();
            double time = static_cast<double>(end - start) * 1000.0 / CLOCKS_PER_SEC;
            return time;
    }

    void swap(int *a, int *b)
    {
        int t = *a;
        *a = *b;
        *b = t;
    }

    int partition(int array[], int low, int high)
    {

        int pivot = array[high];

        int i = (low - 1);

        for (int j = low; j < high; j++)
        {
            if (array[j] <= pivot)
            {

                i++;

                swap(&array[i], &array[j]);
            }
        }

        swap(&array[i + 1], &array[high]);

        return (i + 1);
    }

    void quickSort(int array[], int low, int high)
    {
        if (low < high)
        {

            int pi = partition(array, low, high);

            quickSort(array, low, pi - 1);

            quickSort(array, pi + 1, high);
        }
    }

    double QuickSortTime(int array[], int high)
    {
        clock_t start, end;
        double time_taken;
        start = clock();
        quickSort(array, 0, high - 1);
        end = clock();
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        return time_taken;
    }

    void merge(int array[], int begin, int m, int end)
    {
        int i = 0, j = 0, k;
        int A = m - begin + 1;
        int B = end - m;

        int left[A], right[B];

        for (int i = 0; i < A; i++)
            left[i] = array[begin + i];
        for (int j = 0; j < B; j++)
            right[j] = array[m + 1 + j];

        k = begin;

        while (i < A && j < B)
        {
            if (left[i] <= right[j])
            {
                array[k] = left[i];
                i++;
            }
            else
            {
                array[k] = right[j];
                j++;
            }
            k++;
        }
        while (i < A)
        {
            array[k] = left[i];
            i++;
            k++;
        }

        while (j < B)
        {
            array[k] = right[j];
            j++;
            k++;
        }
    }

    void MergeSort(int array[], int begin, int end)
    {
        if (begin < end)
        {
            int m = (begin + end) / 2;
            MergeSort(array, begin, m);
            MergeSort(array, m + 1, end);
            merge(array, begin, m, end);
        }
    }

    double MergeSortTime(int array[], int high)
    {
        clock_t start, end;
        double time_taken;
        start = clock();
        MergeSort(array, 0, high - 1);
        end = clock();
        //PrintArray(array, high);
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        return time_taken;
    }

};
