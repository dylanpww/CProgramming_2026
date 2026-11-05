//#include <stdio.h>
//
//#define MAXLINE 1000
//#define MAX_LINE 1000
//
//int mgetline(char line[], int maxLine);
//void copy(char to[], char from[]);
//
//int main() {
//    int len, max;
//    char line[MAXLINE];
//    char longest[MAXLINE];
//    char long_lines[MAX_LINE][MAXLINE];
//    int count = 0;
//    max = 0;
//
//    while ((len = mgetline(line, MAXLINE)) > 0) {
//        if (line[0] == '\n' || line[0] == '\0') {
//            continue;
//        }
//
//        if (len > 80) {
//            if (count < MAX_LINE) {
//                copy(long_lines[count], line);
//                count++;
//            }
//        }
//
//        if (len > max) {
//            max = len;
//            copy(longest, line);
//        }
//
//        printf("%s", line);
//    }
//
//    printf("\nover 80 lines :\n");
//    for (int i = 0; i < count; i++) {
//        printf("%s", long_lines[i]);
//    }
//
//    if (max > 0) {
//        printf("\nlongest : %s\n", longest);
//    }
//
//    return 0;
//}
//
//int mgetline(char line[], int maxLine) {
//    int c, i;
//
//    for (i = 0; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
//        line[i] = c;
//    }
//
//    while (i > 0 && (line[i - 1] == ' ' || line[i - 1] == '\t')) {
//        i--;
//    }
//
//    if (c == '\n') {
//        line[i] = c;
//        ++i;
//    }
//
//    line[i] = '\0';
//    return i;
//}
//
//void copy(char to[], char from[]) {
//    int i = 0;
//    while ((to[i] = from[i]) != '\0') {
//        ++i;
//    }
//}