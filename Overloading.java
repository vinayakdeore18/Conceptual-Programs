class Demo
{

    public int  Addition(int A, int B)
    {
        return A+B;
    }
    public int Addtion(int A, int B, int C)
    {
        return A+B+C;

    }
    public double  Addition(double A, double B)
    { return A+B; }

    
    
}
class Overloading 
{
    public static void main(String Arg[])
    {

        Demo dobj = new Demo();
        int iRet = 0;
        double dRet = 0.0;

        iRet =dobj.Addition(10 ,20);
        System.out.println(iRet);
        iRet =Addition(10,20,30)
        System.out.println(iRet);
        dRet =dobj.Addtion(10.0,20.0);
        System.out.println(dRet);
    }
}
