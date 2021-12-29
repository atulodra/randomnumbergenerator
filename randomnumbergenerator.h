#ifndef randomnumbergenerator_h
#define randomnumbergenerator_h

#include<stdlib.h>
#include<time.h>
void randomNumberGenerator(int *array, int size){
    srand(time(NULL));
    for (int i=0;i<size;i++)
        array[i] = rand();
}

#endif