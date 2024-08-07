
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

class DerivedX extends Base
{

    public int P, Q;
    public DerivedX()
    {
        System.out.println("inside derivedX constructor");
    }
}

class heirarchal
{

    public static void main(String Arg[])
    {
       Derived dobj1 = new Derived();

       DerivedX dobj2 = new DerivedX();

    }
}