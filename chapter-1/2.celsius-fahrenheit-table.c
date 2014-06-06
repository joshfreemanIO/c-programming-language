#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;

    while (fahr <= upper) {

        /**
         * 5 / 9 = 0 during runtime due to integer division truncation
         */
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", celsius, fahr);
        fahr = fahr + step;
    }
}
