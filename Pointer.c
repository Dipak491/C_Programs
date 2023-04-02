#include<stdio.h>

int main()
{
    int No = 11;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;
    int ******u = &t;
    return 0;
    
}