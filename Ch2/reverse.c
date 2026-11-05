#include <stdio.h>

#define MAXLINE 1000

int mgetline(char line[], int maxLine);
void reverse(char s[]);

int main() {
    char line[MAXLINE];

    while (mgetline(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int mgetline(char line[], int maxLine) {
    int c, i;

    for (i = 0; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void reverse(char s[]) {
    int i = 0;
    int j = 0;
    char temp;

    while (s[j] != '\0') {
        j++;
    }
    j--;
    if (j >= 0 && s[j] == '\n') {
        j--;
    }

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}