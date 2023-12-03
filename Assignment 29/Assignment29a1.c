// Write a program which search first occurrence of particular element from singly linear linked list
// Function should return position at which element is found.

/*
   Function Prototype :

   int SearchFirstOcc(PNODE Head, int no)

   Input LL : |10|->|20|->|30|->|40|->|50|->|30|->|70|
   Input element : 30
   Output : 3
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
      newn->Next = temp ->Next;
      temp->Next = newn;
    }
}

int SearchFirstOcc(PNODE Head, int No)
{    
    int iCnt = 0;
    int iSize = Count(Head);

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        if(Head->Data == No)
        {
            break;
        }
        Head = Head->Next;
    }
    if(iCnt == iSize+1)
    {
        printf("Element is not present in linked list\n");   
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;

    InsertFirst(&First,10);
    InsertAtPos(&First,20,2);
    InsertAtPos(&First,30,3);
    InsertAtPos(&First,40,4);
    InsertAtPos(&First,50,5);
    InsertAtPos(&First,30,6);
    InsertLast(&First,70);

    Display(First);

    printf("Enter Element whose First occurrence is to be searched : \n");
    scanf("%d",&iNo);
    
    iRet = SearchFirstOcc(First,iNo);
    printf("First Occurrence of %d is : %d\n",iNo,iRet);

    return 0;
}