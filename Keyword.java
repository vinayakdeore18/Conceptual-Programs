
class Base 
{  
    public int A, B;

    Base()
    {
        System.out.println("insdie base constructorr");
        this.A =10;
        this.B =20;
    }
    public void fun()
    {
        System.out.println("iinsdie fun of base ");
    }

}
class Derived extends Base
{
    public int X ,Y;
    public Derived(int i, int j)
    {
        super();
        System.out.println("inside derived constructor");
        this.X = i;
        this.Y = j;
    }
    public void gun()
    {
        System.out.println("inside gun of derived");
        super.fun();
        System.out.println("Value of A : "+super.A);
        System.out.println("Value of x"+this.X);
    }
}
class Keyword
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived(11, 21);
        dobj.
    }
}