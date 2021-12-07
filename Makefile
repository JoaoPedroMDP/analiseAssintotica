files = main.c operations.c operations.h bubbleSort.c bubbleSort.h insertionSort.c insertionSort.h aliases.h

all:
	clear
	gcc -Wall $(files)

debug:
	clear
	gcc -Wall -g $(files)