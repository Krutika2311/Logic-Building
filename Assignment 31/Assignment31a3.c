// Write a program which display product of all digits of all element from singly linear linked list(Dont't consider 0)

/*
   Function Prototype :

   void DisplayProduct(PNODE Head);
   Input LL : |11|->|20|->|32|->|41|
   Ouput : 1 2 6 4
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

int Product(PNODE Head)
{
    int iNo = Head->Data;
    int iMult = 1;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;

    if(iDigit != 0)
    {
        iMult = iMult * iDigit;
    }
    iNo = iNo/10;
    }
    return iMult;
}    

void DisplayProduct(PNODE Head)
{
    int iRet = 0;

    printf("Product of all digits of all elements from singly linked list is : \n");
    while(Head != NULL)
    {
        iRet = Product(Head);
        printf("%d\t",iRet);
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertAtPos(&First,20,2);
    InsertAtPos(&First,32,3);
    InsertAtPos(&First,41,4);
    
    Display(First);
    DisplayProduct(First);

    return 0;
}