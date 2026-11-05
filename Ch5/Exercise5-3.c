#include <stdio.h>

#define MAXLINE 1000

int mgetline(char* s, int lim);
void mystrcat(char* s, char* t);

void mystrcat(char* s, char* t) {
    while (*s != '\0') {
        s++;
    }

    while ((*s++ = *t++) != '\0') {
        ;
    }
}

int mgetline(char* s, int lim) {
    int c;
    char* t = s;

    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
        *s++ = c;
    }
    if (c == '\n') {
        *s++ = c;
    }
    *s = '\0';
    return (int)(s - t);
}

int main(void) {
    char s[MAXLINE], t[MAXLINE];

    putchar('s'); putchar(':');
    mgetline(s, MAXLINE);

    putchar('t'); putchar(':');
    mgetline(t, MAXLINE);

    mystrcat(s, t);
    printf("%s", s);

    return 0;
}