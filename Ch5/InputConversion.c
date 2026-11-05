#include <stdio.h>
#include <ctype.h>

#define SIZE 10
#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0;      /* next free position in buf */

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

/* getint: get next integer from input into *pn */
int getint(int* pn) {
    int c, sign;

    while (isspace(c = getch())) /* skip white space */
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); /* it's not a number */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}

int main(void) {
    int n, s, array[SIZE];

    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++) {
        printf("storing in n = %d, getint = %d\n", n, array[n]);
    }

    printf("\nStored elements:\n");
    for (s = 0; s < n; s++) {
        printf("%d ", array[s]);
    }
    printf("\n");

    return 0;
}