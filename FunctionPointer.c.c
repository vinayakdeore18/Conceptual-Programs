#include<stdio.h>
 
 int Multiplication(int No1, int No2)
 {

    int Ans = 0;
    Ans = No1*No2;
    return Ans;
 }




int main()
{
    int Value1 = 0, Value2 = 0, Ret = 0;

    int (*fptr)(int,int);

    fptr = Multiplication;

    printf("Enter the first number : \n");
    scanf("%d",&Value1);
    
    printf("Enter the second number : \n");
    scanf("%d",&Value2);

    Ret = fptr(Value1,Value2);

    printf("Multiplication is : %d\n",Ret);

    return 0;
}