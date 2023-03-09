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


};
