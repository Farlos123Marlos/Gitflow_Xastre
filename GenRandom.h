#include <iostream>
#include <cstdlib>
using namespace std;

class RandomIntArray {
private:
    int rows_;
    int cols_;
    int** array_;

public:
    RandomIntArray(int rows, int cols) : rows_(rows), cols_(cols) {
        
        array_ = new int*[rows_];
        for (int i = 0; i < rows_; i++) {
            array_[i] = new int[cols_];
        }
    }

    ~RandomIntArray() {
        for (int i = 0; i < rows_; i++) {
            delete[] array_[i];
        }
        delete[] array_;
    }

    void fillRandom(int low, int high) {
        for (int i = 0; i < rows_; i++) {
            for (int j = 0; j < cols_; j++) {
                array_[i][j] = rand() % (high - low + 1) + low;
            }
        }
    }

    bool hasOutOfBounds(int low, int high) {
        for (int i = 0; i < rows_; i++) {
            for (int j = 0; j < cols_; j++) {
                if (array_[i][j] < low || array_[i][j] > high) {
                    return true;
                }
            }
        }
        return false;
    }
    
    void PrintArray (){
    	 for (int j=0; j<2; j++ ){
        for(int i=0; i<cols_; i++)
           cout<<array_[j][i]<<endl;
	}
	}
	int** GetArray(){
		return array_;
	}

};
