#include <iostream>
#include "GenRandom.h"
#include "Sort.h"
#include "Bsearch.h"

using namespace std;

int main() {
	int **array, *aux,i,j,max = 50000;
	aux = new int [max];
	RandomIntArray A(3,max);
	A.fillRandom(20,2000000);
	array=A.GetArray();
    	Sort Sort;
	Bsearch B;

    	int num=20;

    cout << "tempo quick"<< endl;
    for(i=0;i<3;i++){
        for(j=0;j<max;j++){
            aux[j] = array[i][j];
        }
        double time = Sort.QuickSortTime(aux, max);
	double timeSearch1 = B.BinarrySearch( num, aux,max);
        cout<<"Array-"<<i<< " ,Execution time of Sort: " << time << " ms"<<", Time for Search, "<<timeSearch1 <<endl;
    }

    cout << "tempo bubble"<< endl;
    for(i=0;i<3;i++){
        for(j=0;j<max;j++){
            aux[j] = array[i][j];
        }
        double time = Sort.BubbleSort(aux, max);
        double timeSearch1 = B.BinarrySearch( num, aux,max);
        cout<<"Array-"<<i<< " ,Execution time of Sort: " << time << " ms"<<", Time for Search, "<<timeSearch1 <<endl;
    }

    cout << "tempo merge"<< endl;
    for(i=0;i<3;i++){
        for(j=0;j<max;j++){
            aux[j] = array[i][j];
        }
        double time = Sort.MergeSortTime(aux, max);
        double timeSearch1 = B.BinarrySearch( num, aux,max);
        cout<<"Array-"<<i<< " ,Execution time of Sort: " << time << " ms"<<", Time for Search, "<<timeSearch1 <<endl;
    }

    return 0;
}
