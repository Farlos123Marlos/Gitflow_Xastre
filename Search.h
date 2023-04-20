#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Bsearch
{
public:
    double BinarrySearch(int num, int array[], int max)
    {
        iniciar_cronometro();
        int left = 0;
        while (left <= max)
        {
            int mid = left + (max - left) / 2;
            if (array[mid] == num)
            {
                cout << "Tem no array ";
                parar_cronometro();
                return tempo_decorrido();
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
        parar_cronometro();
        return tempo_decorrido();
    }
    double LinearSearch(int array[], int num, int max){
        for (int i = 0; i < max; i++){
            if (array[i] == num){
                return 0;}}
    }
    double LineartTime(int array[], int high)
    {
        iniciar_cronometro();
        LinearSearch(array, 0, high - 1);
        parar_cronometro();
        return tempo_decorrido();
    }
};
