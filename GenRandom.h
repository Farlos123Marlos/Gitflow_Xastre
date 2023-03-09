#include <iostream>
#include <cstdlib>
using namespace std;

class RandomIntArray {
private:
    int rows_;
    int cols_;
    int** array_;

public:
    // Constructor to create a RandomIntArray object with the specified number of rows and columns
    RandomIntArray(int rows, int cols) : rows_(rows), cols_(cols) {
        // Allocate memory for the 2-dimensional array
        array_ = new int*[rows_];
        for (int i = 0; i < rows_; i++) {
            array_[i] = new int[cols_];
        }
    }

    // Destructor to free the memory used by the 2-dimensional array
    ~RandomIntArray() {
        for (int i = 0; i < rows_; i++) {
            delete[] array_[i];
        }
        delete[] array_;
    }

    // Method to fill the 2-dimensional array with random integers between low and high (inclusive)
    void fillRandom(int low, int high) {
        for (int i = 0; i < rows_; i++) {
            for (int j = 0; j < cols_; j++) {
                array_[i][j] = rand() % (high - low + 1) + low;
            }
        }
    }

    // Method to check whether any integer in the 2-dimensional array is outside the range of low to high (inclusive)
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
