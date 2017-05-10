#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100

/* reverse Polish calculator */
main()
{
    int type; 
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)    {
        switch (type)   {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            /* commutative law does not apply to '-' and '/' */
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '*':
                push(pop() * pop());
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("error: zero denominator\n");
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