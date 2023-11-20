/* Problem Statement : Accept division of student from user and depends on the division display exam timing.
  There are 4 divisions in scholl as A,B,C,D.
  Exam of Division A at 7 AM, 
  B at 8.30 AM, 
  C at 9.20 AM, 
  D at 10.30 AM.
  Application should be case insensitive.

  input : C Output : Your exam at 9.20 AM
  input : d Output : Your exam at 10.30 AM
  
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam is at 7 AM.\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam is at 8.30 AM.\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam is at 9.20 AM.\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam is at 10.30 AM.\n");
    }
    else
    {
        printf("Ivalid Division.\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division : \n");
    scanf("%c",&cValue);    

    DisplaySchedule(cValue);
    return 0;
}