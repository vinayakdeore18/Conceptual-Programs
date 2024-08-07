class OOP
{
    public static void main(String Args[])
    {
        Arithmatic obj1 = new Arithmatic();
        Arithmatic obj2 = new Arithmatic(21,11);

        
        int Ret = 0;

        Ret = obj2.Addition();
        System.out.println(Ret);

        Ret = obj2.Substraction();
        System.out.println(Ret);
    }    
}

class Arithmatic
{
    public int No1;
    public int No2;

    public Arithmatic()
    {
        System.out.println("inside default constructor");

        this.No1 =0;
        this.No2 =0;
    }
    public Arithmatic(int A, int B)
    {
        System.out.println("inside parameterized constructor");
        this.No1 =A;
        this.No2 =B;
    }
    public int Addition()
    {
        int Ans = 0;
        
        Ans  = No1 + No2;
        return Ans ;
    }
    public int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
}