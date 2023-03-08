#include <iostream>
#include <time.h>
#include <random>
#include <cstdlib>

using namespace std;

void Random(int *A1, int Max){
    int i;

    for (i=0; i<Max; i++ ){
        A1[i]= rand()%2000000;
    }

}

double TimeBubble(int *A1) {
    int aux;
    clock_t Ticks[2];
    Ticks[0] = clock();
    for (int i = 0; i < 10000; ++i) {
        for (int j = 0; j < (10000 - 1); ++j) {
            if (A1[j] > A1[j + 1]) {
                aux = A1[j];
                A1[j] = A1[j + 1];
                A1[j + 1] = aux;
            }
        }
    }
    Ticks[1] = clock();
    double temp = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    return temp;
}
int main() {
    cout << "Programa de comparacao de tempo entre algoritmos de sort e search" << endl;
    int Max=1000000;
    int* A1 = new int [Max];
    Random(A1, Max);
    double tempox = TimeBubble(A1);
    printf("O algoritmo Bubble demorou %g ms para exucutar a tarefa", tempox);


    return 0;
}
