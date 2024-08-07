class Wrapper 
{
    public static void main(String Arf[])
    {
        Integer iobj = new Integer(11);
        int no = 11;

        Integer i = no;               // Autoboxing

        Integer j = iobj.intValue();  // unboxing

        System.out.println(j);    //11
    }
}


