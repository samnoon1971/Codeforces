import java.util.*;


public class practice {
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        int n=scan.nextInt();
        long a[]=new long[n];
        for(int index=0; index<n; index++)
        {
            a[index]=scan.nextInt();
        }
        long b[]=new long[n], cnt=0;
        for(int index=0; index<n; index++)
        {
            if(a[index]==0)
                cnt++;
            b[index]=cnt;
        }
        long sum=0;
        for(int index = n-1; index>=0; index--)
        {
            if(a[index]!=0)
                sum+=b[n-1]-b[index];
        }
        System.out.println(sum);
        return;
    }
}