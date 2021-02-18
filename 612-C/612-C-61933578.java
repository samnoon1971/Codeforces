import java.util.*;


public class practice {
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        String s=scan.nextLine();
        Stack<Character>ms=new Stack<>();
        int counter=0, n=s.length();
        for(int index=0; index<n; index++)
        {
            char c=s.charAt(index);
            if(c=='(' || c=='[' || c=='{' || c=='<')
                ms.push(c);
            else
            {
                if(ms.empty()==true)
                {
                    System.out.println("Impossible");
                    return;
                }
                else
                {
                    char d=ms.peek();
                    if(c==')' && d!='(')
                        counter++;
                    else if(c=='}' && d!='{')
                        counter++;
                    else if(c==']' && d!='[')
                        counter++;
                    else if(c=='>' && d!='<')
                        counter++;
                    ms.pop();
                }
            }

        }
        if(ms.empty()!=true)
            System.out.println("Impossible");
        else
            System.out.println(counter);
        return;
    }
}