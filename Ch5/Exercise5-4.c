#include <stdio.h>

#define MAXLINE 1000

int mgetline(char* s, int lim);
int mystrlen(char* t);
int strend(char* s, char* t);

int mystrlen(char* t) {
    char* p = t;
    while (*p != '\0') {
        p++;
    }
    return (int)(p - t);
}

int strend(char* s, char* t) {
    int s_len = mystrlen(s);
    int t_len = mystrlen(t);

    if (t_len > s_len) {
        return 0;
    }

    s += (s_len - t_len);

    while (*s != '\0' && *t != '\0') {
        if (*s != *t) {
            return 0;
        }
        s++;
        t++;
    }

    return 1;
}

int mgetline(char* s, int lim) {
    int c;
    char* t = s;

    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
        *s++ = c;
    }
    *s = '\0';
    return (int)(s - t);
}

int main(void) {
    char s[MAXLINE], t[MAXLINE];
    int ret;

    putchar('s'); putchar(':');
    mgetline(s, MAXLINE);

    putchar('t'); putchar(':');
    mgetline(t, MAXLINE);

    ret = strend(s, t);
    printf("%d\n", ret);

    return 0;
}