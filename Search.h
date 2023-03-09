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
                cout << "Tem no array";
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
        cout << "N tem em no array";
        end = clock();
        time_taken = double(end - start) / CLOCKS_PER_SEC;
        return time_taken;
    }
};
