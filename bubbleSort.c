#include <time.h>
#include "aliases.h"
#include "operations.h"

void bubbleSort(int dataset[DATA_AMOUNT])
{
    int i = 0, iteration_changes = 0, comparisons = 0, changes = 0;
    clock_t start = clock();
    do{
        iteration_changes = 0;

        for( i = 0; i < DATA_AMOUNT - 1; i++)
        {
            if( dataset[i] > dataset[i + 1])
            {
                changePositions(dataset, i, i + 1);
                iteration_changes++;
                changes++;
            }
            comparisons++;
        }
    }while(iteration_changes != 0);

    clock_t end = clock();
    printStatistics(changes, comparisons, (int) (end - start));
}