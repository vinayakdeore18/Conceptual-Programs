import java.io.*;

class BinputXX

{
     public static void main(String Arg[])
     {
          try
          {

              BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

               System.out.println("Enter First number :");
               int No1 =Integer.parseInt(bobj.readLine());

               System.out.println("enetr the second number : ");
               int No2 = Integer.parseInt(bobj.readLine());
               

                  int Ans = No1 + No2;
               System.out.println(Ans);
          }
          catch(IOException obj)
          {

          }
     }
}