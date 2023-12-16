// Accept string from user and reverse that contents of that string by toggling the case.

/*
   Input : aCBdef
   Output : FEDcbA 
*/

import java.util.*;

class Assignment36a4
{
    public static String StrRevTogX(String str)
    {
        int iCnt = 0;
        char cTemp = ' ';
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length - 1;

        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;
            iEnd--;
        }  

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
            else if(Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        }
        return new String(Arr);      
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;

        System.out.println("Enter the String : ");
        str = sobj.nextLine();

        String sRet = StrRevTogX(str);

        System.out.println("Reversed and toggled string is : "+sRet);

        sobj.close();
    }
}