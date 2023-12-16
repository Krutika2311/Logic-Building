// Write a java program which accept string from user and display it in reverse order.

/*
   Input : MarvellouS
   Output : SuollevraM

 */

import java.util.*;

class Assignment32a5
{
    public static String Reverse(String str)
    {
        int iStart = 0;
        int iEnd = str.length() - 1;
        char temp;

        char Arr[] = str.toCharArray();

        while(iStart<iEnd)
        {
          temp = Arr[iStart];
          Arr[iStart] = Arr[iEnd];
          Arr[iEnd] = temp;

          iStart++;
          iEnd--; 
        }
        return new String(Arr);
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        String Reverse = Reverse(str);
        System.out.println("Reversed string is : "+Reverse);

        sobj.close();
    }
}