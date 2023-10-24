// Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14 (Area = PI * Radius * Radius)

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius :\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf\n",dRet);

    return 0;
}




// Time Complexity : O(1)