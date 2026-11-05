#include <stdio.h>

void escape(char s[], const char t[]) {
    int i, j;

    for (i = 0, j = 0; t[i] != '\0'; i++) {
        switch (t[i]) {
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        case '\\':
            s[j++] = '\\';
            s[j++] = '\\';
            break;
        default:
            s[j++] = t[i];
            break;
        }
    }
    s[j] = '\0';
}

void unescape(char s[], const char t[]) {
    int i, j;

    for (i = 0, j = 0; t[i] != '\0'; i++) {
        if (t[i] == '\\') {
            switch (t[i + 1]) {
            case 'n':
                s[j++] = '\n';
                i++;
                break;
            case 't':
                s[j++] = '\t';
                i++;
                break;
            case '\\':
                s[j++] = '\\';
                i++;
                break;
            default:
                s[j++] = t[i];
                break;
            }
        }
        else {
            s[j++] = t[i];
        }
    }
    s[j] = '\0';
}

//int main(void) {
//    char t[] = "test\t\thello\nworld\nppp\ttestt";
//
//    char escaped[100];
//    char unescaped[100];
//
//    printf("Original String (t):\n%s\n\n", t);
//
//    escape(escaped, t);
//    printf("Escaped Output (s):\n%s\n\n", escaped);
//
//    unescape(unescaped, escaped);
//    printf("Unescaped Back Output:\n%s\n", unescaped);
//
//    return 0;
//}