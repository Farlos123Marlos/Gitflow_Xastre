#include <iostream>
#include "GenRandom.h"
#include "Sort.h"

typedef Sort sort;
using namespace std;

int main() {
	int **array, *aux,i,j,max = 50000;
	aux = new int [max];
	RandomIntArray A(3,max);
	A.fillRandom(20,2000000);
	array=A.GetArray();
    sort Sort;

	cout << "tempo quick"<< endl;
    for(i=0;i<3;i++){
    	for(j=0;j<max;j++){
    		aux[j] = array[i][j];
		}
    	double time = Sort.QuickSortTime(aux, max);
    	cout<<"Array-"<<i<< " ,Execution time of Sort: " << time << " ms" <<endl;
	}

    cout << "tempo bubble"<< endl;
    for(i=0;i<3;i++){
        for(j=0;j<max;j++){
            aux[j] = array[i][j];
        }
        double time = Sort.BubbleSort(aux, max);
        cout<<"Array-"<<i<< " ,Execution time of Sort: " << time << " ms" <<endl;
    }
	
	cout << "tempo merge"<< endl;
    for(i=0;i<3;i++){
        for(j=0;j<max;j++){
            aux[j] = array[i][j];
        }
        double time = Sort.MergeSortTime(aux, max);
        cout<<"Array-"<<i<< " ,Execution time of Sort: " << time << " ms" <<endl;
    }


    return 0;
}
