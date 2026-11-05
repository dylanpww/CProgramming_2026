#include "Source_header.h"
#include<stdio.h>


int mgetline(void) {
	int c, i;
	extern char line[];
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
		if (c == '\n') {
			line[i] = c;
			++i;
		}
		line[i] = '\0';
		return i;
	}
}

void copy(void) {
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\0') {
		++i;
	}
}