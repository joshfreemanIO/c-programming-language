#include <stdio.h>

main()
{
    version6();
}

version1()
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
         *
         * So we multiply components first, then divide
         */
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", celsius, fahr);
        fahr = fahr + step;
    }
}

version2()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;

    while (fahr <= upper) {

        celsius = 5 * (fahr - 32) / 9;
        printf("%3.1f\t%6.0f\n", celsius, fahr);
        fahr = fahr + step;
    }
}

version3()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    fahr = lower;

    while (fahr <= upper) {

        /**
         * Notice 5.0/9.0
         *
         * We're doing float division, an can now maintiain percision
         */
        celsius = 5.0 / 9.0 * (fahr - 32);
        printf("%4.1f%10.0f\n", celsius, fahr);
        fahr = fahr + step;
    }
}

version4()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %5.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

version5()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %5.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

#define     LOWER 0
#define     UPPER 300
#define     STEP  20

version6()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %5.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
