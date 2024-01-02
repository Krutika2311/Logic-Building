// Write generic program to multiply two nos.

#include<iostream>
using namespace std;

template<class T>
T Multiply(T No1, T No2)
{
    T ans;
    ans = No1 * No2;
    return ans;

}

int main()
{
    int iValue1 = 10, iValue2 = 20, iRet = 0;
    float fValue1 = 10.0f, fValue2 = 20.0f, fRet = 0.0f;

    iRet = Multiply(iValue1, iValue2);
    cout<<"Multiplication is : "<<iRet<<"\n";
        
    fRet = Multiply(fValue1,fValue2);
    cout<<"Multiplication is : "<<fRet<<"\n";

    return 0;
}