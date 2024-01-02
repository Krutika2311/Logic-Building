// Write generic program to accept N values and search last occurrence of any specific value .
/*
   Input :  10 20 30 10 30 40 10 40 10
   Value to check frequency : 40
   Output : 8
*/

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T arr[], int iSize, T No)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(arr[iCnt] == No)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
       return -1;
    }
    else
    {
       return iCnt + 1;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(arr,9,40);
    cout << "Last Occurence of given value is  : " <<iRet<<"\n";

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
        int SearchLast(T No);
    };

    template<class T>
    int Array<T>::SearchLast(T No)
    {
        int iCnt = 0;
        for (iCnt = Size-1; iCnt >= 0; iCnt--)
        {
            if(arr[iCnt] == No)
            {
                break;
            }
        }
        if(iCnt == iSize)
        {
            return -1;
        }
        else
        {
            return iCnt + 1;
        }
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
        for(iCnt = 0; iCnt < Size; iCnt++)
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
        cout << "Enter the value to search: ";
        cin >> iVlaue;

        iRet = obj.SearchLast(iVlaue);

        if (iRet != -1)
        {
            cout << "Last occurrence of " << iVlaue << " is at index : " << iRet << "\n";
        }
        else
        {
            cout << iVlaue << " not found in the array.\n";
        }

        return 0;
    }
*/
