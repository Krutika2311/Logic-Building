// Write a program which display small digits of all element from singly linear linked list

/*
   Function Prototype :

   void DisplaySmall(PNODE Head);
   Input LL : |11|->|250|->|532|->|415|
   Ouput : 1 0 2 1
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = No;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = No;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
}

void Display(PNODE Head)
{
  printf("Input Linked List : \n");

  while(Head != NULL)
  {
    printf("|%d| -> ",Head->Data);
    Head = Head->Next;
  }
  printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head =  Head->Next;
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE newn = NULL;
    
    if((iPos < 1) || (iPos > Size+1)) //Invalid Position
    {
        printf("Invalid Position\n");
        return;
    }
    
    if(iPos == 1)
    {
      InsertFirst(Head,no);
    }

    else if(iPos == Size+1)
    {
      InsertLast(Head,no);
    } 

    else
    {
      newn = (PNODE)malloc(sizeof(NODE)); 

      newn->Data = no;                    
      newn->Next = NULL;

      for(int iCnt = 1; iCnt < iPos-1; iCnt++)
      {
        temp = temp->Next;
      }
      //seq is important
      newn->Next = temp->Next;
      temp->Next = newn;
    }
}

int Smallest(PNODE Head)
{
    int iNo = Head->Data;
    int iMin = 9;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;

    if(iDigit < iMin)
    {
        iMin = iDigit;
    }
    if(iMin == 0)
    {
        break;
    }
    iNo = iNo/10;
    }
    return iMin;
}    

void DisplaySmallest(PNODE Head)
{
    int iRet = 0;

    printf("Smallest digits of all elements from singly linear linked list is : \n");
    while(Head != NULL)
    {
        iRet = Smallest(Head);
        printf("%d\t",iRet);
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertAtPos(&First,250,2);
    InsertAtPos(&First,532,3);
    InsertAtPos(&First,415,4);
    
    Display(First);
    DisplaySmallest(First);

    return 0;
}