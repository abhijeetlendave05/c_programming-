#include<stdio.h>
#include<stdio.h>

int main()
{   

    float Marks[5];    

    int i=0;

    printf("Enter your marks : \n");

    //iteration
    //   1   2   3
    for(i=0;i<5;i++)
    {
        scanf("%f",&Marks[i]);
    }
    printf("Entered marks are:\n");

    for(i=0;i<5;i++)
    {
        printf("%f\n",Marks[i]);
    }
    return 0;
}