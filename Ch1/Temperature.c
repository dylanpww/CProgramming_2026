#include <stdio.h>

//int main(void) {
//	
//	int fahr, celcius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 300;
//	step = 30;
//
//	celcius = upper;
//	printf("Celcius %t Fahrenheit \n");
//	while (celcius >= lower) {
//		fahr = (9 * celcius) / 5 + 32;
//		printf("%d \t %d \n", celcius, fahr);
//		celcius = celcius - step;
//	}
//
//}


//main() {
//	int c;
//
//	while ((c = getchar()) != EOF) {
//		putchar(c);
//	}
//}


//main() {				`1-8
//	int c, nl, blanks, tabs;
//
//	nl = 0;
//	blanks = 0;
//	tabs = 0;
//	printf("New line %t Blanks %t Tabs \n");
//	while ((c = getchar()) != EOF) {
//		if (c == '\n') {
//			++nl;
//		}
//		else if (c == ' ') {
//			++blanks;
//		}
//		else if (c == '	') {
//			++tabs;
//		}
//		printf("%d \t %d \t %d \t \n", nl, blanks, tabs);
//	}
//}

//main() {				1-9
//	int c;
//	int flag = 0;
//
//	while ((c = getchar()) != EOF) {
//		if (c == ' ') {
//			if (!flag) {
//				putchar(c);
//				flag = 1;
//			}
//			
//		}
//		else {
//			putchar(c);
//			flag = 0;
//		}
//	}
//}

//main() {				
//	int c;
//	int flag = 0;
//
//	while ((c = getchar()) != EOF) {
//		if (c == '	') {
//			if (!flag) {
//				putchar(c);
//				flag = 1;
//			}
//			
//		}
//		else {
//			putchar(c);
//			flag = 0;
//		}
//	}
//}

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}