import java.util.Scanner;

public class pattern7_tuf {
    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        for(int i=x;i>0;i--)
        {
            for(int j=0;j<x-i;j++)
            {
                System.out.print(" ");
            }

            for(int j=0;j<i*2-1;j++)
            {
                System.out.print("*");
            }
            
            for(int j=0;j<x-i;j++)
            {
                System.out.print(" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
