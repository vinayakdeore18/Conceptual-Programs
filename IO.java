import java.util.*;

class IO
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first no : ");
        int No1 = sobj.nextInt();

        System.out.println("enter the second no : ");
        int No2 = sobj.nextInt();

        int Ans = No1 + No2;

        System.out.println("the ans is :"+Ans);
    }
}