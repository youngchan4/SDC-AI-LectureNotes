#include <stdlib.h>
#include <stdio.h>

#include "random.h"
#include "time.h"

void random_seed_config(void)
{
    srand(time(NULL));
}

int generate_random_from_min_to_max(const int min, const int max)
{
    return rand() % (max - min + 1) + min;
}