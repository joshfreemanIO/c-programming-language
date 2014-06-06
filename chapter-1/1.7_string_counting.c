#include <stdio.h>

/**
 * Execute in termial and then type and press enter
 */
main()
{
    exercise1_9();
}

version1()
{
    int c;

    while ( c != EOF) {
        putchar(c);
        c = getchar();
    }
}

version2()
{
    int c;

    /**
     * "In C, any assignment...is an expression and has a value, which
     * is the value of the left hand side after the assignment."
     */
    while ( (c = getchar()) != EOF )
        putchar(c);
}

version3()
{
    int c;

    /**
     * Think order of operations (like PEMDAS).  ==/!= has higher precendence
     * than = (tests precede assignments)
     *
     * c = getchar() != EOF
     *
     *     is equivalent to:
     *
     * c = (getchar() != EOF)
     */
    while ( c = getchar() != EOF )
        putchar(c);
}

version4()
{
    char c;

    c = EOF;

    printf("%d", getchar() != EOF);

}

version5()
{
    int c;
    double nc;

    nc = 0;

    while ( (c = getchar() ) != '\n')
        nc++;

    printf("%lo", nc);
}


version6()
{
    double nc;

    for (nc = 0; getchar() != '\n'; ++nc)
        ;
    printf("%.0f", nc);
}


version7()
{
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            nl++;

    printf("\n\n\n%d\n", nl);
}

version8()
{
    printf("%d", 'A');
}


exercise1_8()
{
    int c, last_char;

    while ((c = getchar()) != EOF) {

        if (c == ' ' && c == last_char)
            continue;

        putchar(c);
        last_char = c;
    }
}

exercise1_9()
{
    int c;

    while ((c = getchar()) != EOF) {
        if ( c == '\t')
            putchar('\\');
            c = 't';

        if ( c == '\b')
            putchar('\\');
            c = 'b';

        if ( c == '\b')
            putchar('\\');

        putchar(c);
    }
}
