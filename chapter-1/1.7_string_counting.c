#include <stdio.h>

/**
 * Execute in termial and then type and press enter
 */
main()
{
    version5();
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
    long nc;

    nc = 0;

    while ( (c = getchar() ) != '\n')
        nc++;

    printf("%lo", nc);
}
