import java.util.Scanner;
class Program60
{
    
    public static void main(String A []) 
        {
            Scanner scanner = new Scanner(System.in);
            int iValue = 0;

            Iteration itg = new Iteration();

            System.out.println("Enter frecvency: ");
            iValue = scanner.nextInt();

            itg.Display(iValue); 
        }
}
class Iteration
{
    public void Display(int iNo)
    {
        
            int iCnt = 0;
            //input updator
            if(iNo<0) 
            {
                iNo = - iNo;
            }

            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                System.out.println("--------------");
                System.out.println("Jay Ganesh...");
                System.out.println("--------------");

            }

    }

}