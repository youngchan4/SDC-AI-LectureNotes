#include "random.h"

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void random_pick(void)
{
    srand(time(NULL));
}

int random_gen(const int min,const int max)
{
    return rand() % (max - min + 1) - min;
}