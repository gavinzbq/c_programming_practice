#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

void reverse(char s[]);
int linelen(char s[], int lim);

main()
{
    int len;    /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = linelen(line, MAXLINE)) > 0)  {
        reverse(line);
        printf("The input string's reverse:");
        printf("%s", line);
    }
}
/* reverse: reverse string s in place */
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s)-1; i < j; i++, j--)   {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/* linelen: read a line into s, return length */
int linelen(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')  {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
