#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Bsearch
{
public:
    double BinarrySearch(int num, int array[], int max)
    {
        clock_t start, end;
        double time_taken;
        start = clock();
        int left = 0;
        while (left <= max)
        {
            int mid = left + (max - left) / 2;
            if (array[mid] == num)
            {
                cout << "Tem no array ";
                end = clock();
                time_taken = double(end - start) / CLOCKS_PER_SEC;
                return time_taken;
            }
            else if (array[mid] < num)
            {
                left = mid + 1;
            }
            else
            {
                max = mid - 1;
            }
        }
        cout << "N tem em no array ";
        end = clock();
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        return time_taken;
    }
    double LinearSearch(int array[], int num, int max){
        for (int i = 0; i < max; i++){
            if (array[i] == num){
                return 0;}}
    }
    double LineartTime(int array[], int high)
    {
        clock_t start, end;
        double time_taken;
        start = clock();
        LinearSearch(array, 0, high - 1);
        end = clock();
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        return time_taken;
    }
};
