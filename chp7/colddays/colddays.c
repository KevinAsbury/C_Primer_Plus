#include <stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit. \n");
    
    // scanf returns the number of items formatted
    // in this case it reads the temperatures as floats
    // until it finds a non-numeric input
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }

    if (all_days != 0)
        printf("%d days total: %.1f%% where below freezing.\n",
            all_days, 100.0 * (float) cold_days / all_days);
    else
        printf("No data entered!\n");

    return 0;
}