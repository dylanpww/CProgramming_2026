/**
 * A program calculate the polish notation instead of infix notation
 * Program is given the input in a single and and it print the output upon
 * getting a \n character. For e.g: 10 10 + 100 + 2 * 240
 *
 **/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100       /* max size of operand or operator*/
#define NUMBER '0'      /* signal that a number was found*/
         /* buffer for ungetch*/

int getch(void);
void ungetch(int);
int getop(char[]);
void push(double);
double pop(void);

/* reverse polish calculator*/
int main(void) {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error:zero divisor\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    return 0;
}



/* getop : get next operator or numeric operand*/

