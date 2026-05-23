#include<stdio.h>

int main()
{
    double no = 3.14;
    double *a = &no;
    double **b = &a;
    double ***c = &b;
    double ****d = &c;

    printf("%p\n",&no);
    printf("%p\n",a);
    printf("%p\n",&c);
    printf("%p\n",&d);
    printf("%p\n",d);
    printf("%p\n",**d);
    printf("%p\n",**c);
    printf("%p\n",*b);


    return 0;

}