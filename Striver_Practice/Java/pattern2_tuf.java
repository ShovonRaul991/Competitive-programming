import java.util.Scanner;

public class pattern2_tuf {
    public static void main(String[] args) {
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        for(int i=1;i<=x;i++)
        {
            for(int j =1;j<=i;j++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}
