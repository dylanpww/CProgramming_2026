#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* month_name(int n);

char* month_name(int n) {
    static char* name[] = {
        "Illegal month",
        "January",   "February", "March",
        "April",     "May",      "June",
        "July",      "August",   "September",
        "October",   "November", "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}

int main(void) {
    char* s;
    int n;

    printf("Input month number (1-12):\n");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    s = month_name(n);
    printf("Month name is: %s\n", s);

    return 0;
}