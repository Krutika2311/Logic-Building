// Write generic program to find largest number from three nos.

#include<iostream>
using namespace std;

template<class T>
T Max(T No1, T No2, T No3) 
{
    T Max = No1;

    if (No2 > Max) 
    {
        Max = No2;
    }

    if (No3 > Max) 
    {
        Max = No3;
    }
    return Max;
}

int main() 
{
    int iValue1 = 4, iValue2 = 12, iValue3 = 4, iRet = 0;

    iRet = Max(iValue1, iValue2, iValue3);
    cout << "The largest number is: "<<iRet<<"\n";

    float fValue1 = 10.5f, fValue2 = 11.09f, fValue3 = 21.40f, fRet = 0.0f;

    fRet = Max(fValue1, fValue2, fValue3);
    cout << "The largest number is: "<<fRet<<"\n";

    return 0;
}