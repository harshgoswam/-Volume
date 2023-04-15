#include<stdio.h>

struct distance
{
    int feet;
    int inch;
};

int main()
{
    
 struct distance d1, d2, sum;
   
    printf("Enter first distance: ");
    scanf("%d", &d1.feet);
    printf("Enter second distance: ");
    scanf("%d", &d2.inch);

    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;

    if(sum.inch>=12)
    {
        sum.feet = sum.feet+sum.inch/12;
        sum.inch = sum.inch%12;

    }
    printf("Sum is %d' %d''", sum.feet, sum.inch);
}
