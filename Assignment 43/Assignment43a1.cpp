// Complete below code snippet definitions of below function.

/*
  1. SearchLast() - Search last occurrence of number
  2. EvenCount() - Count Even Elements
  3. OddCount() - Count Odd Elements
  4. SumAll() - Sum of all Elements
*/

#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int Size;

        public:
        Array(int value = 10)
        {
            cout<<"Inside Constructor\n";
            this->Size = value;
            this->Arr = new int[Size];
        }

        Array(Array &ref)
        {
            cout<<"Inside Copy constructor\n";

            this->Size = ref.Size;
            this->Arr = new int[Size];

            int iCnt = 0;

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                this->Arr[iCnt] = ref.Arr[iCnt];
            }
        }

        ~Array()
        {
            cout<<"Inside destructor\n";

            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array :: Accept()
{
    cout<<"Enter the elements : "<<"\n";
    int iCnt = 0;
            
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Array :: Display()
{
    cout<<"Elements of the array are : "<<"\n";
    int iCnt = 0;
            
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
      ArrSearch(int no = 10) : Array(no)
      {}

      int Frequency(int);
      int SearchFirst(int);
      int SearchLast(int);
      int EvenCount();
      int OddCount();
      int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] == value)
        {
            break;
        }
    }
    if(iCnt == Size)
    {
        return -1;
    }
    else
    {
        return iCnt + 1;
    }
}

int ArrSearch :: Frequency(int value)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] == value)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int ArrSearch :: SearchLast(int value)
{
    int iCnt = 0;

    for(iCnt = Size-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == value)
        {
            break;
        }
    }
    if(iCnt == Size)
    {
        return -1;
    }
    else
    {
        return iCnt + 1;
    }
}

int ArrSearch :: EvenCount()
{
    int iCnt = 0;
    int iEven = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] %2 == 0)
        {
            iEven++;
        }
    }
    return iEven;
}

int ArrSearch :: OddCount()
{
    int iCnt = 0;
    int iOdd = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] %2 != 0)
        {
            iOdd++;
        }
    }
    return iOdd;
}

int ArrSearch :: SumAll()
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 0; iCnt < Size; iCnt++)
    {
        iSum += Arr[iCnt];
    }
    return iSum;
}

int main()
{
    cout<<"Inside main\n";

    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = 0;

    iRet = sobj1.Frequency(11);
    cout<<"Frequency is : "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);
    cout<<"First occurrence is : "<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);
    cout<<"Last occurrence is : "<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"EvenCount is : "<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"OddCount is : "<<iRet<<"\n";

    iRet = sobj1.SumAll();
    cout<<"Sum of all elements is : "<<iRet<<"\n";
    return 0;
}










// #include<iostream>
// using namespace std;

// class Array
// {
//     protected:
//         int *Arr;
//         int Size;

//         public:
//         Array(int value)
//         {
//             cout<<"Inside Constructor\n";
//             this->Size = value;
//             this->Arr = new int[Size];
//         }

//         Array(Array &ref)
//         {
//             cout<<"Inside Copy constructor\n";

//             this->Size = ref.Size;
//             this->Arr = new int[Size];

//             int iCnt = 0;

//             for(iCnt = 0; iCnt < Size; iCnt++)
//             {
//                 this->Arr[iCnt] = ref.Arr[iCnt];
//             }
//         }

//         ~Array()
//         {
//             cout<<"Inside destructor\n";

//             delete []Arr;
//         }

//         inline void Accept();
//         inline void Display();
// };

// void Array :: Accept()
// {
//     cout << "Enter the size of the array: ";
//     cin >> Size;

//     if (Size <= 0)
//     {
//         cout << "Invalid size. Exiting.\n";
//         exit(1);
//     }

//     cout << "Enter the elements:\n";
//     Arr = new int[Size];

//     for (int iCnt = 0; iCnt < Size; iCnt++)
//     {
//         cin >> Arr[iCnt];
//     }
// }


// void Array :: Display()
// {
//     cout<<"Elements of the array are : "<<"\n";
//     int iCnt = 0;
            
//     for(iCnt = 0; iCnt < Size; iCnt++)
//     {
//         cout<<Arr[iCnt]<<"\t";
//     }
//     cout<<"\n";
// }

// class ArrSearch : public Array
// {
//     public:
//       ArrSearch(int no) : Array(no)
//       {}

//       int Frequency(int);
//       int SearchFirst(int);
//       int SearchLast(int);
//       int EvenCount();
//       int OddCount();
//       int SumAll();
// };

// int ArrSearch :: SearchFirst(int value)
// {
//     int iCnt = 0;

//     for(iCnt = 0; iCnt < Size; iCnt++)
//     {
//         if(Arr[iCnt] == value)
//         {
//             break;
//         }
//     }
//     if(iCnt == Size)
//     {
//         return -1;
//     }
//     else
//     {
//         return iCnt + 1;
//     }
// }

// int ArrSearch :: Frequency(int value)
// {
//     int iCnt = 0;
//     int iFrequency = 0;

//     for(iCnt = 0; iCnt < Size; iCnt++)
//     {
//         if(Arr[iCnt] == value)
//         {
//             iFrequency++;
//         }
//     }
//     return iFrequency;
// }

// int ArrSearch :: SearchLast(int value)
// {
//     int iCnt = 0;

//     for(iCnt = Size-1; iCnt >= 0; iCnt--)
//     {
//         if(Arr[iCnt] == value)
//         {
//             break;
//         }
//     }
//     if(iCnt == Size)
//     {
//         return -1;
//     }
//     else
//     {
//         return iCnt + 1;
//     }
// }

// int ArrSearch :: EvenCount()
// {
//     int iCnt = 0;
//     int iEven = 0;

//     for(iCnt = 0; iCnt < Size; iCnt++)
//     {
//         if(Arr[iCnt] %2 == 0)
//         {
//             iEven++;
//         }
//     }
//     return iEven;
// }

// int ArrSearch :: OddCount()
// {
//     int iCnt = 0;
//     int iOdd = 0;

//     for(iCnt = 0; iCnt < Size; iCnt++)
//     {
//         if(Arr[iCnt] %2 != 0)
//         {
//             iOdd++;
//         }
//     }
//     return iOdd;
// }

// int ArrSearch :: SumAll()
// {
//     int iCnt = 0;
//     int iSum = 0;

//     for (iCnt = 0; iCnt < Size; iCnt++)
//     {
//         iSum += Arr[iCnt];
//     }
//     return iSum;
// }

// int main()
// {
//     cout << "Inside main\n";

//     ArrSearch sobj1(0);
//     sobj1.Accept();
//     sobj1.Display();

//     int iRet = 0;

//     int iSearchValue = 0, ifrequencyValue = 0;
    
//     cout << "Enter the value to search: ";
//     cin >> iSearchValue;

//     cout << "Enter the value to find frequency: ";
//     cin >> ifrequencyValue;

//     iRet = sobj1.Frequency(ifrequencyValue);
//     cout << "Frequency of " << ifrequencyValue << " is : " << iRet << "\n";

//     iRet = sobj1.SearchFirst(iSearchValue);
//     cout << "First occurrence of " << iSearchValue << " is : " << iRet << "\n";

//     iRet = sobj1.SearchLast(iSearchValue);
//     cout << "Last occurrence of " << iSearchValue << " is : " << iRet << "\n";

//     iRet = sobj1.EvenCount();
//     cout << "EvenCount is : " << iRet << "\n";

//     iRet = sobj1.OddCount();
//     cout << "OddCount is : " << iRet << "\n";

//     iRet = sobj1.SumAll();
//     cout << "Sum of all elements is : " << iRet << "\n";

//     return 0;
// }
