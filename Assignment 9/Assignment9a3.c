// Write a program which accept distance in kilometre and convert it into meter.
// (1 kilometre = 1000 meter)


#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    const int iKilometer = 1000;
    
    iMeter = iNo * iKilometer;
    return iMeter;
    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d\n",iRet);
    return 0;
}



// Time Complexity : O(1)