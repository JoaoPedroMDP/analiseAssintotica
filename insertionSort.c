#include <time.h>
#include "aliases.h"
#include "operations.h"

void insertionSort(int dataset[DATA_AMOUNT]){
    int i = 0, j = 0, actual_index = 0, comparisons = 0, changes = 0;
    clock_t start = clock();
    for( i = 1; i < DATA_AMOUNT; i++)
    {
        actual_index = i;
        for(j = i - 1; j >= 0; j--)
        {
            comparisons++;
            if(dataset[j] > dataset[actual_index])
            {
                changePositions(dataset, actual_index, j);
                actual_index = j;
                changes++;
            }else{
                break;
            }

        }
    }
    clock_t end = clock();
    printStatistics(changes, comparisons, (int) (end - start));
}