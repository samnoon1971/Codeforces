import java.util.Scanner;


public class NewClass
{
    public static boolean test(char[][] board, int n)
    {
        int[] row = {0, -1, 0, 1};
        int[] col = {1, 0, -1, 0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int counter=0;
                for(int k=0; k<4; k++)
                {
                    int x=i+row[k], y=j+col[k];
                    if((x<0 || x>=n) || (y<0 || y>=n))
                        continue;
                    if(board[x][y]=='o')
                        counter++;
                }
                if(counter%2==1)
                    return false;
            }
        }
        return true;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        char[][] board = new char[n][n];
        for(int i=0; i<n; i++)
        {
            String s=input.nextLine();
            for(int j=0; j<n; j++)
                board[i][j] = s.charAt(j);
        }
        if(test(board, n)==true)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}