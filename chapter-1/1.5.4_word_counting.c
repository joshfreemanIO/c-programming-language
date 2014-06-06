#include <stdio.h>

/**
 * Execute in termial and then type and press enter
 */
main()
{
    example1();
}

#define OUT 0
#define IN  1

example1()
{
    int c, nl, nw, nc, state;

    /**
     * Remember, assignment is an expression with a value
     *
     * nl = nw = nc = 0
     *
     *     is equivalent to:
     *
     * nl = (nw = (nc = 0))
     */
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {

        ++nc;

        if (c == '\n')
            ++nl;

        /**
         * If we see a space, tab, or newline character, we are outside a word
         * If we do not see a space, tab, or newline character and the current
         * state is OUT, then we are beginning a new word
         */
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT) {

            state = IN;
            ++nw;
        }
    }

    printf("characters, lines, words\n");
    printf("%4d %4d %4d\n", nc, nl, nw);
}
