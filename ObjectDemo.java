/*
    getClass()
    hashCode()
    equals()
    clone()
    finallize()
 */

class Marvellous
{

}
// class ObjectDemo extends Object
class ObjectDemo
{
    public static void main(String Arg[])
    {
        Object obj = new Marvellous();
        System.out.println(obj.getClass().getName());
    }
}