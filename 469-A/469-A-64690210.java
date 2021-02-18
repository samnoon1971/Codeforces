import java.util.HashSet;
import java.util.Scanner;
import java.util.logging.Handler;

public class Practice {
    public static void main(String args[]) {
        HashSet<Integer> ms = new HashSet<>();
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        int a=input.nextInt();
        for(int index=0; index<a; index++){
            int x=input.nextInt();
            ms.add(x);
        }
        int b=input.nextInt();
        for(int index=0; index<b; index++){
            int x=input.nextInt();
            ms.add(x);
        }
        if(ms.size()!=n)
            System.out.println("Oh, my keyboard!");
        else
            System.out.println("I become the guy.");
        return;
    }
}