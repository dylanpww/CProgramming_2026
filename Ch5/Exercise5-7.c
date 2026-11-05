#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXLEN 1000
#define MAXSTOR 50000

char* lineptr[MAXLINES];
char linestor[MAXSTOR];

int readlines(char* lineptr[], char* linestor, int maxlines, int maxstor);
void writelines(char* lineptr[], int nlines);
void qsort(char* v[], int left, int right);
int mgetline(char* s, int lim);

int main(void) {
    int nlines;

    if ((nlines = readlines(lineptr, linestor, MAXLINES, MAXSTOR)) >= 0) {
        qsort(lineptr, 0, nlines - 1);
        printf("\nSorted Lines:\n");
        writelines(lineptr, nlines);
        return 0;
    }
    else {
        printf("error: input too big to sort\n");
        return 1;
    }
}

int readlines(char* lineptr[], char* linestor, int maxlines, int maxstor) {
    int len, nlines;
    char line[MAXLEN];
    char* p = linestor;
    char* linestor_end = linestor + maxstor;

    nlines = 0;
    while ((len = mgetline(line, MAXLEN)) > 0) {
        if (nlines >= maxlines || p + len > linestor_end) {
            return -1;
        }
        else {
            line[len - 1] = '\0';
            strcpy(p, line);
            lineptr[nlines++] = p;
            p += len;
        }
    }
    return nlines;
}

void writelines(char* lineptr[], int nlines) {
    int i;
    for (i = 0; i < nlines; i++) {
        printf("%s\n", lineptr[i]);
    }
}

void qsort(char* v[], int left, int right) {
    int i, last;
    void swap(char* v[], int i, int j);

    if (left >= right)
        return;
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

void swap(char* v[], int i, int j) {
    char* temp = v[i];
    v[i] = v[j];
    v[j] = temp;
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