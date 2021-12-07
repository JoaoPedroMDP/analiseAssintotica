#include <stdio.h>
#include <stdlib.h>
#include "aliases.h"
#include "bubbleSort.h"
#include "operations.h"
#include "insertionSort.h"
#include <time.h>

void generate_data(int dataset[DATA_AMOUNT], int mode)
{
    int i = 0;

    if(mode == Ordered){
        for(i = 0; i < DATA_AMOUNT; i++)
        {
            dataset[i] = i;
        }
    }else if(mode == ReverseOrdered){
        for(i = 0; i < DATA_AMOUNT; i++)
        {
            dataset[i] = (DATA_AMOUNT - 1) - i;
        }
    }else{
        srand(time(NULL));
        for(i = 0; i < DATA_AMOUNT; i++)
        {
            dataset[i] = rand() % DATA_AMOUNT;
        }
    }
}

void bubblePhase(int dataset[DATA_AMOUNT]){
    printf("BUBBLE\n");
    generate_data(dataset, Ordered);
    bubbleSort(dataset);
    printData(dataset);

    generate_data(dataset, ReverseOrdered);
    bubbleSort(dataset);
    printData(dataset);

    generate_data(dataset, Random);
    bubbleSort(dataset);
    printData(dataset);
}

void insertionPhase(int dataset[DATA_AMOUNT]){
    printf("INSERTION\n");
    generate_data(dataset, Ordered);
    insertionSort(dataset);
    printData(dataset);

    generate_data(dataset, ReverseOrdered);
    insertionSort(dataset);
    printData(dataset);

    generate_data(dataset, Random);
    insertionSort(dataset);
    printData(dataset);
}

int main()
{
    int dataset[DATA_AMOUNT] = {0};

    bubblePhase(dataset);
    insertionPhase(dataset);

    return 0;
}