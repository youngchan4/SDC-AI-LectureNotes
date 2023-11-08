#include <stdio.h>

#include "led/entity/led.h"

int main (void)
{
    int i;
    led *led_array;
    const int led_array_count = 7;
    printf("First C Programming on Linux!\n");

    led_array = init_led_object(led_array_count);
    
    for (i = 0; i < led_array_count; i++)
    {
        set_led_status(led_array, i, true);
    }

    print_led_array_status(led_array);

    return 0;
}
    