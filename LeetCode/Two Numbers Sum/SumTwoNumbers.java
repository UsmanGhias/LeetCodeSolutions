import java.util.Scanner;

//Sump of two Numbers
class SumTwoNumbers {
  public static int TwoSum(int NUM1, int NUM2)
  {
   int Sum   =  (NUM1 + NUM2);
   return Sum;
  }

public static void main(String[] args)
{
Scanner s = new Scanner(System.in);
int num = s.nextInt();
int num2 = s.nextInt();
System.out.println("Please Enter First Number: " + num);
System.out.println("Please Enter Second Number: " + num2);
TwoSum(num, num2);

}

}