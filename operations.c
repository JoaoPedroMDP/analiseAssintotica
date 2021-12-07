#include <stdio.h>
#include <time.h>
#include "aliases.h"

void changePositions(int dataset[DATA_AMOUNT], int origin, int destiny)
{
    int aux = dataset[origin];
    dataset[origin] = dataset[destiny];
    dataset[destiny] = aux;
}

void printStatistics(int changes, int comparisons, int time)
{
    printf("\n\nTrocas: %d\nComparacoes: %d\nTicks do clock: %d\nTempo de CPU em segundos: %3f\n", changes, comparisons, time, ((double) time / CLOCKS_PER_SEC));
}

void printData(int dataset[DATA_AMOUNT])
{
    int i = 0;

    printf("\n");
    for( i = 0; i < DATA_AMOUNT; i++)
    {
        printf(" %3d", dataset[i]);
    }
    printf("\n\n");
}