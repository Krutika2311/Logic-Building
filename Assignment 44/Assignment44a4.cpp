// Write generic program to accept N values from user and return largest value.

#include<iostream>
using namespace std;

template <class T>
T Max(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Max(arr,5);
    cout<<"Largest number is : "<<iRet<<"\n";

    float fRet = Max(brr,4);
    cout<<"Largest number is : "<<fRet<<"\n";

    return 0;
}