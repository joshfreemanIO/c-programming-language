#include <stdio.h>

/**
 * Execute in termial and then type and press enter
 */
main()
{
    int c, i, nwhite, nother;

    /** Declare ndigit to be an array of 10 integers */
    int ndigit[10];

    nwhite = nother = 0;

    for (i = 0; i <= 10; i++)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            /**
             * "By definition, chars are just small integers, so char variables
             * and constants are identical to ints in arithmetic
             * expressions. This is natural and convenient;
             * for example, c-'0' is an integer expression with a
             * value between 0 and 9 corresponding to the character
             * '0' to '9' stored in c, and is thus a valid sub-script
             * for the array ndigit."
             *
             * Translation:
             *
             * The current value of c is a integer that corrosponds to the
             * characeter set (as a textual number). In ASCII, the textual '0'
             * is represented by the number 48, just as the textual 'A' is
             * represented by the number 65.
             *
             * The 'keys' of the array are actual integers (0-9), but we need
             * to translate the current character being used from its
             * ASCII numerical representation to its actual intended value
             *
             * Getting a textual '2' returns an int 50, by subtracting
             * the ASCII '0' (an integer of 47), we get the actual number
             *
             *  As integers         As text
             * (50 - 48 = 2) == ('2' - '0' = 2 )
             *
             * Thus, c-'0', in this expression, means
             */
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;

    printf("digits = ");

    for (i = 0; i < 10; i++)
        printf("%d - %d,", i, ndigit[i]);

    printf("whitespace - %d, other - %d\n", nwhite, nother);
}
