#include<stdio.h>
int main()
{
    int a1, a2, b1, b2, c1, c2;


 printf("Enter the coefficients of first line");
    scanf("%d %d", &a1, &b1);
     printf("Enter the coefficients of second line");
    scanf("%d %d", &a2, &b2);
     printf("Enter the constant value ");c1
    scanf("%d %d", &c1, &c2);
    printf("First line is %d x + %d y= %d\n", a1, b1, );
    printf("Second line is %d x + %d y= %d\n", a2, b2, c2);
    if(((a1/a2)==(b1/b2))&&((b1/b2)==(c1/c2)))
        printf("Lines are coincident.");
    else
    if((a1/a2)==(b1/b2))
        printf("Lines are parallel");
    else if(((a1/a2)==(b1/b2))&&((b1/b2)!=(c1/c2)))
        printf("Lines are intersecting.");
    else
        printf("Others");
    return 0;
    }
