// Write generic program to accept N values from user and return smallest value.

#include<iostream>
using namespace std;

template <class T>
T Min(T Arr[], int iSize)
{
    int iCnt = 0;
    T Min = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(arr,5);
    cout<<"Smallest number is : "<<iRet<<"\n";

    float fRet = Min(brr,4);
    cout<<"Smallest number is : "<<fRet<<"\n";

    return 0;
}