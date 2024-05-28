#include <stdio.h>

int main()
{
    int y=7;
    int *p=&y;
    *p=14;
    printf("%p,%i\n",p,*p);
}
