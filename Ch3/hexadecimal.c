#include<stdio.h>

int htoi(char s[]) {
    int i = 0;
    int n = 0;
    int hexval;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    for (; s[i] != '\0'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            hexval = s[i] - '0';
        }
        else if (s[i] >= 'a' && s[i] <= 'f') {
            hexval = s[i] - 'a' + 10;
        }
        else if (s[i] >= 'A' && s[i] <= 'F') {
            hexval = s[i] - 'A' + 10;
        }
        else {
            break;
        }

        n = 16 * n + hexval;
    }

    return n;
}


int main() {
    printf("htoi ('84ada') = %d\n", htoi("84ada"));
}