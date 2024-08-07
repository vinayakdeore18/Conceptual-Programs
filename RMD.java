
Class Base
{
    public int A,B;
   
    public  void Fun()
    {   System.out.println("inside base fun");   }
    public  void Gun()
    {   System.out.println("inside base Gun");   }
    public  void Sun()
    {   System.out.println("inside base Sun");   }
    public  void Run()
    {   System.out.println("inside base Run");   }
    

}

class Derived extends Base  
{
   public int X,Y;
   
   public  void Gun()
   {    System.out.println("inside Derived Gun");    }
    public  void Run()
   {    System.out.println("inside Derived Run");    }
    public  void Mun()
   {    System.out.println("inside Derived Mun");    }


}

class RMD
{

    public static void main(String Arg[])
    {
        Base bobj = new Derived();
        bobj.Fun();
        bobj.Gun();
        bobj.Sun();
        oboj.Run();
        bobj.Mun();
    }
}