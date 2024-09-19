import java.util.Scanner;

public class pattern11_tuf {

    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        int start;
        for(int i = 0; i <= x;i++)
        {
            start = i%2==0?0:1;
            for(int j =0;j<i;j++)
            {
                System.err.print(start);
                start = (start==0)?1:0;
            }
            System.err.println();
        }
        sc.close();
    }
}