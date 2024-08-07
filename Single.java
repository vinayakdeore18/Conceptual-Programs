
Class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base constructor");

    }
    void Fun()
    {
        System.out.println("inside base fun");
    }

}

class Derived extends Base  // class Derived : public Base
{
   public int X,Y;
   public Derived()
   {

    System.out.println("Derived Constructor" );
   }
   void Gun()
   {

    System.out.println("inside Derived Gun");
   }


}

class Single
{

    public static void main(String Arg[])
    {
       Derived dobj = new Derived();
       dobj.Fun();
       dobj.Gun();


    }
}