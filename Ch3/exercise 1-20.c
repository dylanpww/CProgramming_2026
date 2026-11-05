//#include <stdio.h>
//
//#define TABINC 8
//
//int main(void) {
//    int c;
//    int pos = 0;
//    int nb;
//
//    while ((c = getchar()) != EOF) {
//        if (c == '\t') {
//            nb = TABINC - (pos % TABINC);
//            while (nb > 0) {
//                putchar(' ');
//                pos++;
//                nb--;
//            }
//        }
//        else if (c == '\n') {
//            putchar(c);
//            pos = 0;
//        }
//        else {
//            putchar(c);
//            pos++;
//        }
//    }
//
//    return 0;
//}