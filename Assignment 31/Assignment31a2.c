// Write a program which display all palindrome elements of singly linked list

/*
   Function Prototype :

   void DisplayPalindrome(PNODE Head);
   Input LL : |11|->|28|->|17|->|414|->|6|->|89|
   Ouput : 11 6 414
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

void Palindrome(PNODE Head)
{
    int iNo = Head->Data;
    int iTemp = iNo;
    int iRev = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iRev = (iRev*10)+iDigit;
        iNo = iNo/10;
    }
    if(iRev == iTemp)
    {
        printf("%d\t",iRev);
    }
}    

void DisplayPalindrome(PNODE Head)
{
    printf("Palindrome elements of singly linked list is : \n");
    while(Head != NULL)
    {
        Palindrome(Head);
        Head = Head->Next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertAtPos(&First,28,2);
    InsertAtPos(&First,17,3);
    InsertAtPos(&First,414,4);
    InsertAtPos(&First,6,5);
    InsertAtPos(&First,89,6);
    
    Display(First);
    DisplayPalindrome(First);

    return 0;
}