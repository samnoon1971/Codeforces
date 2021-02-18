import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

public class Practice {
    public static void main(String args[]) {
        ArrayList<Integer> a = new ArrayList<>();
        ArrayList<Integer> b = new ArrayList<>();
        ArrayList<Integer> c = new ArrayList<>();
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int index=0; index<n; index++){
            int x = input.nextInt();
            if(x!=0){
                if(x>0)
                    a.add(x);
                else
                    b.add(x);
            }
            else{
                c.add(x);
            }
        }
        if(b.size()%2!=1){
            c.add(b.get(b.size()-1));
            b.remove(b.size()-1);
        }
        if(a.isEmpty()!=false){
            int x=b.get(b.size()-1), y=b.get(b.size()-2);
            b.remove(b.size()-1);
            b.remove(b.size()-1);
            a.add(x);
            a.add(y);
        }
        System.out.print(b.size() + " ");
        b.forEach(num->System.out.print(num + " "));
        System.out.println();
        System.out.print(a.size() + " ");
        a.forEach(num->System.out.print(num + " "));
        System.out.println();
        System.out.print(c.size() + " ");
        c.forEach(num->System.out.print(num + " "));
    }
}