// Write generic program to accept N values and count frequency of any specific value.

/*
   Input :  10 20 30 10 30 40 10 40 10
   Value to check frequency : 10
   Output : 4
*/

#include<iostream>
using namespace std;

template <class T>
int Frequency(T arr[], int iSize, T No)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == No)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(arr,9,10);
    cout << "Frequency of 10: " <<iRet<<"\n";

    return 0;
}











/*

    #include<iostream>
    using namespace std;

    template <class T>
    class Array
    {
    public:
        T *Arr;
        int Size;

        Array(int Length);
        ~Array();
        void Accept();
        void Display();
        int Frequency(T No);
    };

    template<class T>
    int Array<T>::Frequency(T No)
    {
        int iCnt = 0;
        int iFrequency = 0;
        for (iCnt = 0; iCnt < Size; iCnt++)
        {
            if (Arr[iCnt] == No)
            {
                iFrequency++;
            }
        }
        return iFrequency;
    }

    template<class T>
    Array<T>::Array(int Length)
    {
        Size = Length;
        Arr = new T[Size];
    }

    template<class T>
    Array<T>::~Array()
    {
        delete[] Arr;
    }

    template<class T>
    void Array<T>::Accept()
    {
        int iCnt = 0;
        
        cout << "Enter the elements : \n";
        for (iCnt = 0; iCnt < Size; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    template<class T>
    void Array<T>::Display()
    {
        int iCnt = 0;
        cout << "Elements of the array are : \n";
        for (iCnt = 0; iCnt < Size; iCnt++)
        {
            cout << Arr[iCnt] << "\t";
        }
        cout << "\n";
    }

    int main()
    {
        int iRet = 0;
        int iSize;
        cout << "Enter the size of the array: ";
        cin >> iSize;

        if (iSize < 0)
        {
            cout << "Invalid size.\n";
            return -1;
        }
        Array<int> obj(iSize);

        obj.Accept();
        obj.Display();

        int iVlaue;
        cout << "Enter the value to check its frequency : ";
        cin >> iVlaue;

        iRet = obj.Frequency(iVlaue);

        cout << "Frequency of " << iVlaue << " is : " << iRet << "\n";
        return 0;
    }
*/