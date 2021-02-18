import java.lang.reflect.Array;
import java.util.*;

public class Practice {
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        String s=scan.nextLine();
        int n=s.length(), cnt=0;
        for(int i=0; i<n; i++)
        {
            if(Character.isUpperCase(s.charAt(i)))
                cnt++;
        }
        if(2*cnt>n)
            System.out.println(s.toUpperCase());
        else
            System.out.println(s.toLowerCase());
        return;
    }
}