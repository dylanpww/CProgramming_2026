#include <stdio.h>

int rindex(const char s[], const char t[]) {
    int i, j, k;
    int pos = -1;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0') {
            pos = i;
        }
    }

    return pos;
}

//int main(void) {
//    char s[] = "asdasdawdasd";
//    char t[] = "sda";
//
//    int index = rindex(s, t);
//
//    printf("String s: %s\n", s);
//    printf("String t: %s\n", t);
//    printf("Rightmost index: %d\n", index);
//
//    return 0;
//}