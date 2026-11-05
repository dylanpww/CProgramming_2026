//#include<stdio.h>
//
//void main() {
//	int c, i;
//	int word_length = 0;
//	int word = 0;
//
//	while ((c = getchar()) != EOF && c != '\n') {
//		if (c == ' ' || c == "\t") {
//			if (word) {
//				for (int i = 0; i < word_length; i++) {
//					printf("*");
//				}
//				printf("\n");
//
//				word_length = 0;
//				word = 0;
//			}
//		}
//		else {
//			word_length++;
//			word = 1;
//		}
//	}
//
//	if (word) {
//		for (int i = 0; i < word_length; i++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
