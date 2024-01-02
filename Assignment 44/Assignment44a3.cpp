// Write a generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template <class T>
T AddN(T Arr[], int iSize)
{
    T Sum = 0;
    int iCnt = 0;
        
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    cout<<"Addition of numbers is : "<<iSum<<"\n";

    float fSum = AddN(brr,4);
    cout<<"Addition of numbers is : "<<fSum<<"\n";

    return 0;
}



/*

    #include<iostream>
    using namespace std;

    template <class T>
    T Addition(T Arr[], int Length)
    {
        T Sum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Length; iCnt++)
        {
            Sum = Sum + Arr[iCnt];
        }
        return Sum;
    }

    int main()
    {
        int Size = 0, iCnt = 0; 
        float Ret = 0.0;
        float *ptr = NULL;

        // Step 1 : accept elements
        cout<<"Enter number of elements : "<<"\n";
        cin>>Size;

        // Step 2 : dynamic allocation
        ptr = new float(Size);

        // Step 3 :
        cout<<"Enter the elements : "<<"\n";

        for(iCnt = 0; iCnt < Size; iCnt++)
        {
            cin>>ptr[iCnt];
        }
        // Step 4 : Function call
        
        Ret = Addition(ptr,Size);

        cout<<"Addition of all elements is : "<<Ret<<"\n";

        // Step 5 :
        delete []ptr;

        return 0;
    }
*/