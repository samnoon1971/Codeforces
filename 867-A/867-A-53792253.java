import java.util.Scanner;


public class NewClass
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        String s = input.nextLine();
        try
        {
         if(s.charAt(0)=='S' && s.charAt(n-1)=='F')
            System.out.println("YES");
        else
            System.out.println("NO");
        }
        catch(StringIndexOutOfBoundsException e)
        {
            System.err.print(e.getMessage());
        }
    }
}