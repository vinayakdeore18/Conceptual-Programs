class Student implements Cloneable
{
    public String Name;
    public int Marks;
    public int Age;


    public Student(String str, int A , int B)
    {
        this.Name = str;
        this.Marks = A;
        this.Age = B;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
    
}
class CopyDemo

{
    public static void main(String arg[])
    {
        try
        {
        
        Student sobj = new Student("Amit",87,25);
        System.out.println("Name of student :"+sobj.Name);
         System.out.println("Amrks obatined by student student :"+sobj.Marks);
          System.out.println("Age od student :"+sobj.Age);
        
        Student sobjX = (Student)sobj.clone();
        System.out.println("NAme of stidentt :"+sobjX.Name);
        System.out.println("Marks obatined by student :"+sobjX.Marks);
        System.out.println("Age of sudent :"+sobjX.Age);
        
        }

        catch(Exception obj)
        {

        }
    }
}