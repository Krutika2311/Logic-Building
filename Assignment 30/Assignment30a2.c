// Write a program which displays all elements which are prime from singly linear linked list

/*
  Function Prototype :

  int DisplayPrime(PNODE Head);
  Input LL : |11|->|20|->|17|->|41|->|22|->|89|
  Output : 11 17 41 89
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckPrime(int iNo)
{
    bool bFlag = true;

    for(int iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
        return bFlag;
    }
}

int DisplayPrime(PNODE Head)
{   
    printf("Prime numbers in the Linked List are : \n");
    while(Head != NULL)
    {
        if(CheckPrime(Head->Data))
        {
            printf("%d\t",Head->Data);
        }
        Head = Head->Next;
    } 
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    InsertAtPos(&First,11,1);
    InsertAtPos(&First,20,2);
    InsertAtPos(&First,17,3);
    InsertAtPos(&First,41,4);
    InsertAtPos(&First,22,5);
    InsertAtPos(&First,89,6);

    Display(First);
    DisplayPrime(First);

    return 0;
}