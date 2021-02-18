import java.lang.reflect.Array;
import java.util.*;

public class Practice {
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        int n=scan.nextInt();
        ArrayList<Integer>ar=new ArrayList<>(n);
        int m=Integer.MAX_VALUE, sum=0;
        for(int i=0; i<n; i++)
        {
            int x=scan.nextInt();
            ar.add(x);
            if(x%2==1)
            {
                m=Math.min(m, x);
            }
            sum+=x;
        }
        if(m==Integer.MAX_VALUE)
        {
            System.out.println(0);
            return;
        }
        if(sum%2==0)
            sum-=m;
        System.out.println(sum);
        return;
    }
}