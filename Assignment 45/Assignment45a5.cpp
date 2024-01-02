// Write generic program to accept N values and reverse the contents.

/*
   Input :  10 20 30 10 30 40 10 40 10
   Output : 10 40 10 40 30 10 30 20 10
*/

#include<iostream>
using namespace std;

template <class T>
void Reverse(T arr[], int iSize)
{
    T Temp;
    int iStart = 0;
    int iEnd = iSize - 1;

    while (iStart < iEnd)
    {
        Temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = Temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iCnt = 0;

    cout << "Original array: ";
    for(iCnt = 0; iCnt < 9; iCnt++)
    {
        cout<<arr[iCnt]<<"\t";
    }
    cout<<"\n";

    Reverse(arr,9);

    cout << "Reversed array: ";
    for(iCnt = 0; iCnt < 9; iCnt++)
    {
        cout<<arr[iCnt]<<"\t";
    }
    cout<<"\n";

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
        void Reverse();
    };

    template<class T>
    void Array<T>::Reverse()
    {
        T Temp;
        int iStart = 0;
        int iEnd = Size - 1;

        while (iStart < iEnd)
        {
            Temp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = Temp;

            iStart++;
            iEnd--;
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

        obj.Reverse();

        cout << "Reversed array: ";
        obj.Display();

        return 0;
    }
*/