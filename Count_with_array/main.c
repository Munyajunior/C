#include <stdio.h>
#include <stdlib.h>

/*Count digits, white spaces, others*/


int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for(i=0;i<10;++i)
        ndigit[i];

    while((c = getchar()) !=EOF )
        if(c >= '0' && c<= '9')
            ++ndigit[c-'0'];
        else if(c == ' ' || c=='\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("Digits =");
    for (i=0;i<10;++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite,nother);
    return 0;
}
